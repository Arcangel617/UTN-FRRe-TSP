import java.util.Scanner;
public class Main{
	public static void main(String [] args){
		Scanner e = new Scanner(System.in);
		int num = e.nextInt();
		if(num % 2 == 0){
			System.out.println("par");
		}else{
			System.out.println("impar");
		}
	}
}
