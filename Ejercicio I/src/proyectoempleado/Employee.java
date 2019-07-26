package proyectoempleado;
/**
 * ----------------------------------------------------------------------------------------------------
 * Programa Empleados
 * Clase Empleado.java
 * ----------------------------------------------------------------------------------------------------
 *  Version  | Date         | Developer           | University                     | Course
 *  1.0      | 22/07/2019   | Walter Diaz         | Mariano Galvez de Guatemala    | Programacion No.2
 * ----------------------------------------------------------------------------------------------------
 */
public class Employee {
    
    //Variables
    private String name; 
    private String lastName;
    private int age; 
    private int salary;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
    
    public boolean setNewSalary(int amount, int age) {
        return age > 40;
    }
}
