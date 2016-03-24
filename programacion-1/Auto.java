public class Auto {

	// Defino atributos
	/* 
	 * NOTA: los atributos son caracteristicas de un objeto.
	 * NOTA: Un objeto es una instancia de una clase.
	 */
	private String color;
	private int cantPuertas;
	private String estado;

	// public, protected, private
	// si no defino la visibilidad, queda en un limbo (default o friendly)

	// Defino comportamiento
	/* 
	 * NOTA: Haciendo una analogia con el paradigma estructural,
	 * un procedimiento es un metodo que no duevelve valor alguno.
	 */
	public void encenderse(){
		estado = "Arrancando...";
	}

	public void acelerar(){
		estado = "Pisteando como un camperon...";
	}

	public void frenar(){
		estado = "Quieto...";
	}

	public String getEstado(){
		return estado;
	}

	public void setEstado(String estadoNuevo){
		estado = estadoNuevo;
	}
}

