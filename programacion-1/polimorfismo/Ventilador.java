public class Ventidalor extends AparatoElectrico{
	private String estado;
	private Integer velocidad;

	public Integer getVelocidad(){
		return velocidad;
	}

	public String getEstado(){
		return estado;
	}

	public void setEstado(String estado){
		this.estado = estado;
	}

	public void mostrarEstado(){
		System.out.println("Estoy "+estado+" girando a velocidad "+ velocidad);
		super.mostrarDondeEstaEnchufado();
	}
}