public class Main {
	public static void main (String [] args){
		//Auto autito = new Auto();
		//Auto auto2 = new Auto();

		//autito.encenderse();
		//auto2.frenar();

		//System.out.println("Estado de autito: "+autito.getEstado());
		//System.out.println("Estado de auto2: "+auto2.getEstado());

		Persona persona1 = new Persona("Arcangel","Artigue");
		persona1.fullName();
		System.out.println(persona1.getName()+" esta "+persona1.getEstado());
		Persona persona2 = new Persona("Andres","Salinas");
		persona2.fullName();
		persona2.setEstado("haciendo el ejercicio");
		System.out.println(persona2.getName()+" esta "+persona2.getEstado());
	}
}
