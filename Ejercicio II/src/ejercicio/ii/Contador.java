/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio.ii;

/**
 *
 * @author cocoguerra
 */
public class Contador {
    private int contador;
    private int suma;
    
    public Contador() {}
    
    public Contador(int[] numeros, boolean aumentar) {
        if (aumentar) {
            for (int x = 0; x < numeros.length; x++) {
                suma += numeros[x];
            }
            this.contador = suma;
        } else {
            for (int x = 0; x < numeros.length; x++) {
                suma -= numeros[x];
            }
            this.contador = suma;
        }
    }

    public int getContador() {
        return contador;
    }

    public void setContador(int contador) {
        this.contador = contador;
    }
}
