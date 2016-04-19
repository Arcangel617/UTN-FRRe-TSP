import java.util.Scanner;
public class Main{
	public static void main(String [] args){
		Scanner e = new Scanner(System.in);
		int n = e.nextInt();
		int k = e.nextInt();
		int contar = 0;
		int num = 0;
		for(int i = 0; i < n; i++){
			num = e.nextInt();
			if(num == k){
				contar++;
			}
		}
		System.out.println(contar);
	}
}
