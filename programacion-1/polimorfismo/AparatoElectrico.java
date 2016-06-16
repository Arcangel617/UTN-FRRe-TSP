public class AparatoElectrico{
	private String tipoDeAlimentacion;

	public String getTipoDeAlimentacion(){
		return tipoDeAlimentacion;
	}

	public void setTipoDeAlimentacion(String tipoDeAlimentacion){
		this.tipoDeAlimentacion = tipoDeAlimentacion
	}

	public void mostrarDondeEstaEnchufado(){
		System.out.println("Estoy enchufado a un toma de "+tipoDeAlimentacion);
	}
}