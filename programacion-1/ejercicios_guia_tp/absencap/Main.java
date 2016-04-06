/**
 * @author Artigue Arcangel Andres
 */
public class Main {
	public static void main (String [] args){
		Ventilador venti = new Ventilador();
		venti.setEstado("prendido");
		venti.setVelocidad(5);
		venti.mostrarEstado();
		venti.estado = "Acabo de romper el encapsulamiento";
		venti.mostrarEstado();
	}
}
