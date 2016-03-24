public class Persona {
	private String name;
	private String lastname;
	private String estado;

	public Persona(String nuevoNombre, String nuevoApellido){
		name = nuevoNombre;
		lastname = nuevoApellido;
		estado = "en clases";
	}

	public String getName(){
		return name;
	}

	public void fullName(){
		System.out.println("Nombre completo: "+name+" "+lastname);
	}

	public String getEstado(){
		return estado;
	}
	
	public void setEstado(String nuevoEstado){
		estado = nuevoEstado; 
	}
}
