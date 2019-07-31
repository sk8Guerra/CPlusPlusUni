/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package interfaceabstract;

/**
 *
 * @author cocoguerra
 */
public class Ejecutivo extends Empleado {

    @Override
    public void salario() {
        System.out.println("Printing Salario");
    }

    @Override
    public void nombre() {
        System.out.println("Printing Nombre");
    }

    @Override
    public void genero() {
        System.out.println("Printing GENERO");
    }

    @Override
    public void estadoCivil() {
        System.out.println("Printing Estado Civil");
    }

    @Override
    public void fechaNacimiento() {
        System.out.println("Printing Fecha Nacimiento");
    }
    
    public void Profesion() {
        System.out.println("Soy Doctor");
    }
    
}
