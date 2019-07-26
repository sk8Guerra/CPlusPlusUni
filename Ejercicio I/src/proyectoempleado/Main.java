package proyectoempleado;
/**
 * ----------------------------------------------------------------------------------------------------
 * Ejercicio I
 * Main Class
 * ----------------------------------------------------------------------------------------------------
 *  Version  | Date         | Developer           | University                     | Course
 *  1.0      | 22/07/2019   | Jorge Guerra        | Mariano Galvez de Guatemala    | Programacion No.2
 * ----------------------------------------------------------------------------------------------------
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Employee empleado = new Employee ();
        Employee empleado2 = new Employee ();
       
        empleado.setName("Luan");
        empleado.setLastName("Oliveira");
        empleado.setAge(50);
        empleado.setSalary(3500);
     
        empleado2.setName("");
        empleado2.setLastName("Pudwill");
        empleado2.setAge(29);
        empleado2.setSalary(4500);

        show(empleado, false);
        show(empleado2, false);

        empleado.setAge(56);
        
        show(empleado, true);
        
        boolean newSalary = empleado.setNewSalary(100, empleado.getAge());
        if (newSalary) { empleado.setSalary(empleado.getSalary() + 100); }
        show(empleado, true);
        
        empleado2.setName("Torey");
        show(empleado2, false);
    }
    
    public static void show(Employee empleado, boolean modificado) {
        if (!modificado) {
            System.out.println("*************************************");
            showBody(empleado);
        } else {
            System.out.println("**************Modificado*************");
            showBody(empleado);
        }
    }
    
    public static void showBody(Employee empleado) {
        System.out.println("              Empleado               ");
        System.out.println("*************************************");
        System.out.println("Nombre: " + empleado.getName());
        System.out.println("-------------------------------------");
        System.out.println("Apellido: " + empleado.getLastName());
        System.out.println("-------------------------------------");
        System.out.println("Edad: " + empleado.getAge());
        System.out.println("-------------------------------------");
        System.out.println("Salario: " + empleado.getSalary());
        System.out.println("*************************************");
    }
}
