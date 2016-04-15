import java.util.Scanner;
public class Main{
	public static void main (String [] args){
		Scanner e = new Scanner(System.in);
		int ca = e.nextInt();
		int[] n = new int[ca];
		for (int i = 0; i < n.length; i++){
			n[i] = e.nextInt();
		}
		int s = 0;
		for (int i = 0; i < n.length; i++){
			s = s + n[i];
		}
		float p = s/ca;
		System.out.printf("%.2f",p);
	}
}
