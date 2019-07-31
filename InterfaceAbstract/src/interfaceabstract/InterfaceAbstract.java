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
public class InterfaceAbstract extends Ejecutivo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        InterfaceAbstract interfaceAbstract = new InterfaceAbstract();
        interfaceAbstract.salario();
        interfaceAbstract.nombre();
        interfaceAbstract.genero();
        interfaceAbstract.estadoCivil();
        interfaceAbstract.fechaNacimiento();
        interfaceAbstract.Profesion();
    }
    
}
