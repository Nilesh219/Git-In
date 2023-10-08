interface Maths1{
    void math1();
    void math2();
}

interface maths2 extends Maths1{
    
    void math3();
    void math4();
}

class MainMaths implements maths2{
    public void math1(){
        System.out.println("math1");
    }
    public void math2(){
        System.out.println("math2");
    }

    public void math3(){
        System.out.println("math3");
    }
    public void math4(){
        System.out.println("math4");
    }
}

public class oop_58_inheritance_in_interface {
    public static void main(String[] args) {
        MainMaths obj = new MainMaths();
        obj.math1();
        obj.math2();
        obj.math3();
        obj.math4();
    }
}
