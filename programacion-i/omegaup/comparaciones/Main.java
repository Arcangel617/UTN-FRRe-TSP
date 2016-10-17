import java.util.Scanner;
public class Main {
	public static void main (String [] args){
		Scanner e = new Scanner(System.in);
		int va = e.nextInt();
		int vb = e.nextInt();
		if(va < vb){
			System.out.println("menor");
		}else if (va > vb){
			System.out.println("mayor");
		}else{
			System.out.println("iguales");
		}
	}
}
