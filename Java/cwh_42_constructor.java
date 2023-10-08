//Default Constructor 
class Con1{
    Con1(){
        System.out.println("This is Default Constructor");
    }
}

//Parameterized Constructor
class Con2{
    Con2(String name, int id){
        System.out.println("The Employee name: " + name);
        System.out.println("The Employee id: " + id);
    }
}

//Overloading Constructor
class Con3{
    Con3(){
        System.out.println("this Overloading Constructor");
    }
    Con3(String name, int id){
        System.out.println("The Employee name: " + name);
        System.out.println("The Employee id: " + id);
    }
}
//Example Employee 
class Employeemy{
    private String name;
    private int id;
    private int salary;

    Employeemy(){
        name = "defalut";
        id = 0;

        System.out.println("The Employee name: " + name);
        System.out.println("The Employee id: " + id);

    }
    Employeemy(String n, int id, int s){
        name = n;
        this.id = id;
        salary = s;

        System.out.println("The Employee name: " + name);
        System.out.println("The Employee id: " + id);
        System.out.println("The Employee Salary: " + salary);
        
    }
    
    public void setname(String n){
        name = n;
    }

    public void setid(int id){
        this.id = id;
    }

    public void setsalary(int s){
        salary = s;
    }

    public String getname(){
        return name;
    }
    
    public int getid(){
        return id;
    }

    public int getsalary(){
        return salary;
    }

}
public class cwh_42_constructor{
    public static void main(String[] args){
        // Con1 obj1 = new Con1(); //default constructor 
        // Con2 obj2 = new Con2("Nilesh", 21); //parameterized constructor
        //overloading constructor
        // Con3 obj3 = new Con3();
        // Con3 Nilesh = new Con3("Nilesh", 21);

        Employeemy Nilesh1 =  new Employeemy();
        Employeemy Nilesh2 = new Employeemy("Nilesh", 21, 250000000);
        
        Nilesh1.setname("Nilesh kadam");
        Nilesh1.setid(212);
        Nilesh1.setsalary(500000000);
        System.out.println(Nilesh1.getname());
        System.out.println(Nilesh1.getid());
        System.out.println(Nilesh1.getsalary());
        
    }
}