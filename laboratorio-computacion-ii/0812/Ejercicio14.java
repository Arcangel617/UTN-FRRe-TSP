/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio14 {
    
    public static void main (String [] args){
        
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        entrada.useDelimiter("\n");
        
        System.out.print("a: ");
        double a = Double.parseDouble(entrada.next());
        System.out.print("b: ");
        double b = Double.parseDouble(entrada.next());
        
        int cantidadNaturales = 0;
        int cantidadPares = 0;
        double sumaImpares = 0;
        
        if(b < a){
            b = Math.ceil(b);
            while(b <= a){
                if(b > 0){
                    System.out.println(b);
                    cantidadNaturales++;
                    if((b%2)==0){
                        cantidadPares++;
                    }else{
                        sumaImpares = sumaImpares + b;
                    }//cierra if-else
                    
                }//cierra if
                b++;
            }//cierra while
            
        }else if (b > a){
            a = Math.ceil(a);
            while(a <= b){
                if(a > 0){
                    System.out.println(a);
                    cantidadNaturales++;
                    if((a%2)==0){
                        cantidadPares++;
                    }else{
                        sumaImpares = sumaImpares + a;
                    }//cierra if-else
                    
                }//cierra if
                a++;
            }// cierra while
            
        }else{
            a = Math.ceil(a);
            if((a > 0)&&((a%2)==0)){
                System.out.println(a);
                cantidadPares++;
                cantidadNaturales++;
            }else if(a > 0){
                System.out.println(a);
                cantidadNaturales++;
                sumaImpares = sumaImpares + a;
            }else{
                System.out.println("No hay resultados que mostrar...");
            }//cierra if-elseif-else
            
        }//cierra if-elseif-else
        
        System.out.println("Cantidad de numeros naturales: "+cantidadNaturales);
        System.out.println("Cantidad numeros pares: "+cantidadPares);
        System.out.println("Suma impares: "+sumaImpares);
    }//cierra main
    
}
