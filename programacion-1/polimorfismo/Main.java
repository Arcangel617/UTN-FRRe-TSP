public class Main{
	public static void main(String[] args) {
		AparatoElectrico[] aparatos = new AparatoElectrico[3];
		
		Ventilador ventiladorA = new Ventilador();
		ventiladorA.setTipoDeAlimentacion("220 Volts");
		ventiladorA.setEstado("Encendido");
		ventiladorA.setVelocidad(3);

		Ventilador ventiladorB = new Ventilador();
		ventiladorB.setTipoDeAlimentacion("220 Volts");
		ventiladorB.setEstado("Encendido");
		ventiladorB.setVelocidad(7);

		AireAcondicionado aireA = new AireAcondicionado();
		aireA.setTipoDeAlimentacion("220 Volts");
		aireA.setEstado("Encendido en frio a 20 grados");
		aireA.setVelocidad(2);

		aparatos[0] = ventiladorA;
		aparatos[1] = ventiladorB;
		aparatos[2] = aireA;

		for (int i = 0; i < aparatos.lenght; i++ ) {
			aparatos[i].mostrarDondeEstaEnchufado();
		}

	}