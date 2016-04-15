import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
	public static void main (String args []){
		int nro1, nro2;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			nro1 = Integer.parseInt(br.readLine());
			nro2 = Integer.parseInt(br.readLine());
			System.out.println(nro1*nro2);
		}catch(IOException e){
			System.out.println(e);
		}
	}
}
