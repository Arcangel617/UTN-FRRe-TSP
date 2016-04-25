import java.util.Formatter;
import java.util.Locale;

public class Main{
	public static void main(String [] args){
		StringBuilder sb = new StringBuilder(); 
		Formatter f = new Formatter(sb, Locale.US);
		//System.out.println(19/3);
		float d = 19/3;
		System.out.println(f.format("%f",d));
	}
}
