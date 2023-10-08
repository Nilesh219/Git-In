

public record Employee(int id, int salary, String name) {
    public void printDetails() {
        System.out.println("My id is " + id);
        System.out.println("and my name is " + name);
    }

    public int getSalary() {
        return salary;
    }
}
public class cwh_38_custom_class {
    public static void main(String[] args) {

        // Syntax of custom class
        // class <class_name>{
        //     field;
        //     method;
        // }

        // Example
        // public class Employee{
        //     int id;        // Attribute 1
        //     String name;   // Attribute 2
        // }

        // A class with Methods 
        // public class Employee{
        //     public int id;
        //     public String name;

        //     public int getSalary(){
        //         // code
        //     }
        //     public void getDetails(){
        //         // code
        //     }
        System.out.println("This is our custom class");
        Employee harry = new Employee(12, 34, "CodeWithHarry");
        Employee john = new Employee(17, 12, "John Khandelwal");

        harry.printDetails();
        john.printDetails();
        int salary = john.getSalary();
        System.out.println("John's salary is: " + salary);
    }
}
