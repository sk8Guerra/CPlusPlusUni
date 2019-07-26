/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio.ii;
import java.util.Scanner;

/**
 *
 * @author cocoguerra
 */
public class EjercicioII {
    
    public static int numero;
    public static int suma = 0;
    public static int decision;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        System.out.println("¿Cuantos numero deseas?");
        numero = scanner.nextInt();
        int[] numeros = new int[numero];
        
        for (int x = 0; x < numero; x++) {
            System.out.println("");
            System.out.println("Numero: " + (x + 1));
            numeros[x] = scanner.nextInt();
        }
        
        System.out.println("");
        System.out.println("¿Que operacion deseas?");
        System.out.println("1 = aumentar");
        System.out.println("2 = decrementar");
        decision = scanner.nextInt();
        
        if (decision == 1) {
            Contador contador = new Contador(numeros, true);
            System.out.println("El el aumento fue de: " + contador.getContador());
        } else {
            Contador contador = new Contador(numeros, false);
            System.out.println("El el decremento fue de: " + contador.getContador());
        }   
    }
}
