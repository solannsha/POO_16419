package vector.ec.edu.espe.validarcedual;
import java.util.Scanner;
import java.lang.Thread;


public class ValidarCedual {

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        Cedula cedulita = new Cedula();
        String dato;
        
        int vec[]= new int[10];
        String cedula;
        
        System.out.print("Digite su numero de cedual: ");
        cedula = scanner.nextLine();
        
        vec = cedulita.convertirString(cedula);
        
        dato = cedulita.verificar(vec);
        
        System.out.println(dato);
        cedulita.nevevoAr(vec);
    }
}
