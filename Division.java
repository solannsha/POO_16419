import java.io.FileInputStream;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Division {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Ingrese el numerador: ");
        int numerador = sc.nextInt();

        System.out.print("Ingrese el denominador: ");
        int denominador = 0;

        try {
            denominador = sc.nextInt();
            double resultado = numerador / denominador;
            System.out.println(numerador + " / " + denominador + " = " + resultado);
        } catch (ArithmeticException e) {
            System.out.println("¡Error aritmético! No se puede dividir por cero.");
        } catch (InputMismatchException e) {
            System.out.println("¡Entrada inválida! Ingrese un número entero.");
        } finally {
            sc.close();
        }
    

        //MIGUEL ANGEL VILLACRES - IOFileNotFoundException
        try {
            FileInputStream ins = new FileInputStream("./Archivo.txt");
            System.out.println("Archivo Encontrado");
        } catch (Exception ex) {
            System.out.println("Archivo no encontrado");
            System.out.println(ex.getClass());
        }

        //IVAN MANTILLA - ArrayIndexOutOfBoundsException
        try {
            System.out.println();
            int[] vector = {1, 2, 3,4,5};
            System.out.println(vector[7]);
        } 
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("El indice del arreglo no esta dentro de los limites");
        }
        finally{
            System.out.println("El arreglo solo tiene 5 elementos, los cuales van desde el 0 al 3, el indice asignado es 7");
        }
        // JORGE OSCULLO - NullPointerException | ArrayIndexOutOfBoundsException
        try{
            int[] numeros= {1,2,3};
            int numero=numeros[4];
            System.out.println("El resultado es"+numero);
        } catch (NullPointerException | ArrayIndexOutOfBoundsException ex){
        Systeum.out.println("El error es nulo");      
        }
        // ARIAN CALERO - NoSuchElementException
        try {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Ingrese un número: ");
        int numero = scanner.nextInt();
        System.out.println("Ingrese otro número: ");
        int otroNumero = scanner.nextInt();
        System.out.println("Ingrese otro número: ");
        int tercerNumero = scanner.nextInt();
    
        } catch (NoSuchElementException ex) {
       System.out.println("No hay más elementos para leer en la entrada.");
}

/**
 * Excepcion: NumberFormatException
 * @author Kevin Ruales
*/
        try {
            System.out.print("Ingrese un numero decimal para la operacion compuesta: ");
            double dec = Double.parseDouble(sc.nextLine());

            double resp = (35-dec)/(5-3*(6 + numerador*3));
            System.out.println("La respuesta es: " + resp);
        } catch (NumberFormatException e) {
            System.out.println("[Error]: El dato ingresado no es válido..");
        } finally {
            sc.close();
        }

    }
}
