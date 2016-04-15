import java.util.Scanner;
public class Main{
	public static void main (String [] args){
		Scanner e = new Scanner(System.in);
		int min = e.nextInt();
		if (min >= 1 && min <= 100){
			System.out.println(min*60);
		}
	}
}
