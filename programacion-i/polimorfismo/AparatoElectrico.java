public class AparatoElectrico{
	private String tipoDeAlimentacion;

	public String getTipoDeAlimentacion(){
		return tipoDeAlimentacion;
	}

	public void setTipoDeAlimentacion(String tipoDeAlimentacion){
		this.tipoDeAlimentacion = tipoDeAlimentacion
	}

	/* Por herencia , éste metodo es comun en todas las clases hijas */
	public void mostrarDondeEstaEnchufado(){
		System.out.println("Estoy enchufado a un toma de "+tipoDeAlimentacion);
	}
}