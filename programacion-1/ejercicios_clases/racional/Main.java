import com.math.Racional;

public class Main {

	public static void main(String[] args){

		Racional numero = new Racional(3,4);
		Racional otroNumero = new Racional(1,2);
		
		System.out.println(numero+" + "+otroNumero);
		numero.add(otroNumero);
		System.out.println(numero);

		numero = null;
		otroNumero = null;
		
		numero = new Racional(3,4);
		otroNumero = new Racional(2,7);

		System.out.println(numero+" + "+otroNumero);
		numero.add(otroNumero);
		System.out.println(numero);	
		
		numero = null;
		otroNumero = null;
		
		numero = new Racional(3,4);
		otroNumero = new Racional(1,4);

		System.out.println(numero+" + "+otroNumero);
		numero.add(otroNumero);
		System.out.println(numero);

	}

}
