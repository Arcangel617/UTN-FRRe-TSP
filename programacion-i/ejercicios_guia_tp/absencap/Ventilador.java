/**
 * @author Artigue Arcangel Andres
 */
public class Ventilador {
	String estado;
	Integer velocidad;

	
	public Integer getVelocidad(){
		return velocidad;
	}

	public void setVelocidad(Integer velocidadNueva){
		velocidad = velocidadNueva;
	}

	public String getEstado(){
		return estado;
	}

	public void setEstado(String estadoNuevo){
		estado = estadoNuevo;
	}

	public void mostrarEstado(){
		System.out.println("Estoy "+estado+" girando a velocidad "+velocidad);
	}
}
