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
    }
}