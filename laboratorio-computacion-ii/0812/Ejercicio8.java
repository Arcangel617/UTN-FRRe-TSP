/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio8 {
    public static void main(String [] args){
        
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        entrada.useDelimiter("\n");
        
        String continuar = " ";
        int nro = 0;
        int nroCifras = 1;
        
        while(!continuar.equals("s")){
        	
        nroCifras = 1;
        
        System.out.print("Ingrese un numero: ");
        nro = Integer.parseInt(entrada.next());
        
        for (int unidad = 10; unidad < nro; unidad=unidad*10) {
            nroCifras = nroCifras + 1;
        }
        
        System.out.println("El número tiene "+nroCifras+" cifras");
        System.out.println("====================================");
        System.out.println("Pulse una tecla para continuar... \n[s] Salir");
        continuar = entrada.next();
               
            
        }// cierra while */ 
        
        
    
    }// cierra main
    
}// cierra class