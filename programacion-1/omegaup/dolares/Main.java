import java.util.Scanner;
public class Main{
	public static void main(String [] args){
		Scanner e = new Scanner(System.in);
		int n = e.nextInt();
		int k = e.nextInt();
		if((n >= 0 && n <= 10000) && (k >= 0 && k <= 100)){
			System.out.println(n*k);
		}
	}
}
