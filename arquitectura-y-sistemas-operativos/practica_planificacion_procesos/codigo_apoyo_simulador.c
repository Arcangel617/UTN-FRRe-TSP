#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct event
{
	struct event* next;
	int type;
	int takes;
};

struct process
{
	struct process* next;
	struct event* event;
	char* name;
	int termination;
	int comes;
	int duration;
	int prio;
	int responsetime;
};

struct stat
{
	char* name;
	int responsetime;
};

//GLOBAL VARIABLES
int FCFS = 0;
int RROB = 1;
int PRIO = 2;
int LJF = 3;
int SJF = 4;

int IOtype = 0;
int CPUtype = 1;
int INPUTtype = 2;

struct process* CPU; // CPU queue
struct process* IO; // I/O queue
struct process* input; // input queue

int quantum;
int currentQuantum;
int amount;
int algo;
int clock;
int statindex;

struct stat* statistics;

void ListProcesses(struct process* tmp)
{
	while(tmp != NULL)
	{
		printf("name[%s] comes[%d] duration[%d] prio[%d] term[%d] resp[%d]\n", tmp->name, tmp->comes, tmp->duration, tmp->prio, tmp->termination, tmp->responsetime);
		struct event* tmp2 = tmp->event;
		while(tmp2 != NULL)
		{
			if(tmp2->type == CPUtype)
				printf("\tEvent[CPU]");
			else
				printf("\tEvent[I/O]");
			printf("\tTakes[%d]\n", tmp2->takes);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

/* ---------------------------------------------------------------------------
* read_line - read a line from [fp], return its contents in a
* dynamically allocated buffer, not including the line ending.
*
* Handles CR, CRLF and LF line endings, as well as NOEOL correctly. If
* already at EOF, returns NULL. Will err() or errx() in case of
* unexpected file error or running out of memory.
*/
static char *read_line(FILE *fp)
{
	char *buf;
	long startpos, endpos;
	size_t linelen, numread;
	int c;

	startpos = ftell(fp);

	/* find end of line (or file) */
	linelen = 0;
	for (;;)
	{
		c = fgetc(fp);
		if (c == EOF || c == (int)'\n' || c == (int)'\r') break;
		linelen++;
	}

	/* return NULL on EOF (and empty line) */
	if (linelen == 0 && c == EOF) return NULL;

	endpos = ftell(fp);

	/* skip CRLF */
	if (c == (int)'\r' && fgetc(fp) == (int)'\n') endpos++;

	buf = (char*)malloc(linelen + 1);

	/* rewind file to where the line stared and load the line */
	fseek(fp, startpos, SEEK_SET);
	numread = fread(buf, 1, linelen, fp);

	/* terminate buffer */
	buf[linelen] = 0;

	/* advance file pointer over the endline */
	fseek(fp, endpos, SEEK_SET);

	return buf;
}
	
char* addprocess(char* line, FILE* fd)
{
	char* startpos = line;
	struct process* newproc = malloc(sizeof(struct process));
	newproc->next = NULL;
	newproc->event = NULL;
	newproc->termination = -1;
	newproc->responsetime = 0;
	char* pos = strstr(line, "Process");
	pos += 8;
	line = strstr(pos, "Comes");
	newproc->name = malloc(line-pos-1);
	memcpy(newproc->name, pos, line-pos);
	newproc->name[line-pos-1] = '\0';

	printf("name[%s]", newproc->name);
	line += 6;
	newproc->comes = atoi(line);

	printf("comes[%d]", newproc->comes);

	line = strstr(line, "Duration");
	line += 9;
	newproc->duration = atoi(line);

	printf("dur[%d]", newproc->duration);

	line = strstr(line, "Prio");
	line += 5;
	newproc->prio = atoi(line);

	printf("prio[%d]\n", newproc->prio);

	free(startpos);

	while(1)
	{
		line = read_line(fd);
		if(line == NULL || strstr(line, "Event") == NULL)
			break;
		startpos = line;
		if(strstr(line, "Terminate") == NULL)
		{
			struct event* newevent = malloc(sizeof(struct event));
			newevent->next = NULL;
			if(newproc->event == NULL)
				newproc->event = newevent;
			else
			{
				struct event* temp = newproc->event;
				while(temp->next != NULL) temp = temp->next;
				temp->next = newevent;
			}
			line = strstr(line, "Type");
			line += 5;
			if(strstr(line, "CPU") == line)
				newevent->type = CPUtype;
			else
				newevent->type = IOtype;
			line = strstr(line, "Takes");
			line += 6;
			newevent->takes = atoi(line);

			printf("\ttype[%d] takes[%d]\n", newevent->type, newevent->takes);
		}
		else
		{
			pos = strstr(line, "Occurs");
			pos += 7;
			newproc->termination = atoi(pos);
			printf("\tterm[%d]\n", newproc->termination);
		}
		free(startpos);
	}
	amount++;
	if(input == NULL)
		input = newproc;
	else if(newproc->comes < input->comes)
	{
		newproc->next = input;
		input = newproc;
	}
	else
	{
		struct process* temp = input;
		while(temp->next != NULL)
		{
			if(temp->next->comes > newproc->comes)
				break;
			temp = temp->next;
		}
		newproc->next = temp->next;
		temp->next = newproc;
	}
	return line;
}

void enqueue(struct process* what, int type)
{
	if(type == CPUtype && CPU == NULL)
		CPU = what;
	else if(type == IOtype && IO == NULL)
		IO = what;
	else
	{
		struct process* to;
		if(type == CPUtype)
			to = CPU;
		else
			to = IO;
		while(to->next != NULL)
			to = to->next;
		to->next = what;
	}
}

void enqueueByAlgo(struct process* what)
{
	if(CPU == NULL)
	{
		// CPU is empty
		CPU = what;
		currentQuantum = quantum;
	}
	else
	{
		// CPU is not empty
		if(CPU->next != NULL)
		{
			// CPU's first element is a process is being processed
			struct process* to = CPU;
			for(;to->next != NULL; to = to->next)
				if( (algo == PRIO && what->prio > to->next->prio) || (algo == LJF && what->duration > to->next->duration) || (algo == SJF && what->duration < to->next->duration) )
					break;
				what->next = to->next;
				to->next = what;
			}
			else // there is only one process in CPU
			CPU->next = what;
		}
}

struct process* dequeue(int type)
{
	struct process* from;
	if(type == IOtype)
		from = IO;
	else if(type == CPUtype)
		from = CPU;
	else
		from = input;

	struct process* retval = from;
	if(type == IOtype)
		IO = IO->next;
	else if(type == CPUtype)
		CPU = CPU->next;
	else
		input = input->next;
	retval->next = NULL;
	return retval;
}

 void terminate(int type)
 {
 struct process* from;
 if(type == IOtype)
 from = IO;
 else
 from = CPU;
 statistics[statindex].name = from->name;
 printf("TERMITATOR\t name[%s]\t", statistics[statindex].name);
 statistics[statindex].responsetime = from->responsetime;
 printf("resp[%d]\n", statistics[statindex].responsetime);
 if(from->event != NULL) free(from->event);
 struct process* going = dequeue(type);
 free(going);
 statindex++;
 printf("ENDOF TERMINATION\n");
 }

 void readfile()
 {
 while(1)
 {
 printf("Enter Processes file name: ");
 char buffer[50];
 scanf("%s", buffer);
 FILE* fd = fopen(buffer, "rt");
 if(fd == NULL)
 {//file not found
 printf("file not found, try again.\n");
 }
 else
 {// read file
 printf("file is found, starting processing\n");
 // PARSING ! :(

 char* line = read_line(fd);
 char* tmp = strstr(line, "Quantum");
 tmp += 8;
 quantum = atoi(tmp);
 tmp = strstr(tmp, "Scheduler");
 tmp += 10;
 if(strcmp(tmp, "RROB") == 0)
 algo = RROB;
 else if(strcmp(tmp, "PRIO") == 0)
 algo = PRIO;
 else if(strcmp(tmp, "FCFS") == 0)
 algo = FCFS;
 else if(strcmp(tmp, "LJF") == 0)
 algo = LJF;
 else if(strcmp(tmp, "SJF") == 0)
 algo = SJF;
 free(line);

 printf("Quantum[%d] ", quantum);
 printf("Scheduler[%d]\n", algo);

 line = read_line(fd);
 while(line != NULL)
 line = addprocess(line, fd);

 printf("------List of Coming Processes------\n");
 ListProcesses(input);

 fclose(fd);

 break;
 }

 }


 }

 void printout()
 {
 printf("\nCLOCK[%d]\n", clock);
 if((algo==RROB || algo==PRIO))
 {
 printf("CURRENT QUANTUM[%d]\n", currentQuantum);
 printf("CPU:\n");
 }
 ListProcesses(CPU);
 if((algo==RROB || algo==PRIO))
 {
 printf("I/O:\n");
 ListProcesses(IO);
 }
 printf("******************************************************************\n");
 }


 int main()
 {
 readfile();
 printf("amount[%d]\n", amount);
 statistics = malloc(amount* sizeof(struct stat));
 statindex = 0;

 while(input != NULL || CPU != NULL || IO != NULL)
 {
 char* BOOL = NULL;
 struct process* temp = CPU;
 for(;temp != NULL; temp = temp->next)
 temp->responsetime++;
 temp = IO;
 for(;temp != NULL; temp = temp->next)
 temp->responsetime++;

 //processing CPU
 if(CPU != NULL)
 {
 CPU->termination--;
 CPU->event->takes--;
 if(CPU->termination == 0)
 {
 terminate(CPUtype);
 currentQuantum = quantum;
 }
 else if(CPU->event->takes == 0)
 {
 currentQuantum = quantum;
 struct event* going = CPU->event;
 CPU->event = CPU->event->next;
 free(going);
 if(CPU->event == NULL)
 terminate(CPUtype);
 else if(algo == RROB || algo == PRIO)
 {
 BOOL = CPU->name;
 enqueue(dequeue(CPUtype), IOtype);
 }
 }
 else if(algo == PRIO || algo == RROB)
 {
 currentQuantum--;
 if(currentQuantum == 0)
 {
 enqueueByAlgo(dequeue(CPUtype));
 currentQuantum = quantum;
 }
 }
 }

 //processing IO
 if(IO != NULL && BOOL != IO->name)
 {
 IO->termination--;
 IO->event->takes--;
 if(IO->termination == 0)
 terminate(IOtype);
 else if(IO->event->takes == 0)
 {
 struct event* going = IO->event;
 IO->event = IO->event->next;
 free(going);
 if(IO->event == NULL)
 terminate(IOtype);
 else
 enqueueByAlgo(dequeue(IOtype));
 }
 }

 // new process is coming
 while(input != NULL && input->comes == clock)
 {
 if(input->event->type == CPUtype)
 enqueueByAlgo(dequeue(INPUTtype));
 else
 {
 if(algo != RROB && algo != PRIO)
 enqueueByAlgo(dequeue(INPUTtype));
 else
 enqueue(dequeue(INPUTtype), IOtype);
 }
 }



 if(clock % 50 == 0)
 {
 printout();
 getchar();
 }

 clock++;
 }

 printf("STATISTICS\n");
 int i;
 for(i=0;i<amount;i++)
 printf("name[%s]\tresp[%d]\n", statistics[i].name, statistics[i].responsetime);

 return 0;
 }

/////////////////////////////Contenido de Ejemplo del Archivo de entrada///////////////////////////////////////////////
 
// Kernel Quantum=500ms Scheduler=PRIO
// Process Proc1 Comes=1000ms Duration=1000ms Prio=1
// Event Type=CPU Occurs=0ms Takes=250ms
// Event Type=I/O Occurs=250ms Takes=50ms
// Event Type=CPU Occurs=300ms Takes=650ms
// Event Type=Terminate Occurs=950ms
// Process Proc2 Comes=500ms Duration=4500ms Prio=2
// Event Type=CPU Occurs=0ms Takes=1000ms
// Event Type=I/O Occurs=1000ms Takes=2000ms
// Event Type=CPU Occurs=3000ms Takes=1500ms
// Event Type=Terminate Occurs=4500ms
// Process Proc3 Comes=650ms Duration=2500ms Prio=3
// Event Type=CPU Occurs=0ms Takes=1000ms
// Event Type=I/O Occurs=1000ms Takes=1500ms
// Event Type=Terminate Occurs=2500ms
// Process Proc4 Comes=1000ms Duration=3000ms Prio=4
// Event Type=I/O Occurs=0ms Takes=1500ms
// Event Type=CPU Occurs=1500ms Takes=1500ms
// Event Type=Terminate Occurs=3000ms
// Process Proc5 Comes=1500ms Duration=2000ms Prio=2
// Event Type=CPU Occurs=0ms Takes=500ms
// Event Type=I/O Occurs=500ms Takes=1000ms
// Event Type=CPU Occurs=1500ms Takes=450ms
// Event Type=Terminate Occurs=1950ms

