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

        //MIGUEL ANGEL CHACON - IOFileNotFoundException
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
    }
}