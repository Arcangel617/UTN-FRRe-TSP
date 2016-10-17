import java.util.Scanner;
public class Main{
	public static void main (String [] args){
		Scanner e = new Scanner(System.in);
		int mayor = Integer.MIN_VALUE;
		int menor = Integer.MAX_VALUE;
		int total = e.nextInt();
		int p = 0;
		for(int i = 0; i < total; i++){
			p = e.nextInt();
			if(p > mayor){
				mayor = p;
			}
			if(p < menor){
				menor = p;
			}
		}
		System.out.println(mayor);
	}
}
