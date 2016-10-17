import com.impl.*;

// import permite disponibilizar clases que no estan dentro del mismo paquete.

public class Main {
	public static void main (String [] args){
		AutoAcuatico autoac = new AutoAcuatico();
		AutoVapor autovp  = new AutoVapor();

		autoac.encenderse();
		autovp.encenderse();

		System.out.println("Estado del auto acuatico: "+autoac.getEstado());
		System.out.println("Estado del auto a vapor: "+autovp.getEstado());
		System.out.println("Cantidad de oxigeno: "+autoac.getCantidadOxigeno());

		//Persona persona1 = new Persona("Arcangel","Artigue");
		//persona1.fullName();
		//System.out.println(persona1.getName()+" esta "+persona1.getEstado());
		//Persona persona2 = new Persona("Andres","Salinas");
		//persona2.fullName();
		//persona2.setEstado("haciendo el ejercicio");
		//System.out.println(persona2.getName()+" esta "+persona2.getEstado());
	}
}
