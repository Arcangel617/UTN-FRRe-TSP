

/**
 *
 * @author arcangel
 */
public class Ejercicio10 {
    
    public static void main (String [] args){
        
        /* si n = 0 -> a = 0
         * si n = 1 -> b = 1
         * si n = m -> c = b + a
         */
        int a = 0;
        int b = 1;
        int c;
        
        for (int n = 0; n <= 30; n++) {
            if(n == 0){
                System.out.println("n="+n+" -> "+a);
            }else if (n == 1){
                System.out.println("n="+n+" -> "+b);
            }else{
                c = b + a;
                a = b;
                b = c;
                System.out.println("n="+n+" -> "+c);
            }
            
        }
        
    }
    
    
}
