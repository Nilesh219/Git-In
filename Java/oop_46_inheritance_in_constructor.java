class Base1 {
    public int x;    
    public int a;    

    Base1() {
        System.out.println("This is Base1 class Constructor..");
    }
    Base1(int a){
        System.out.println("this is overloaded Constructor Base1 with value of a is " + a);
    }

    public void setx(int x) {
        this.x = x;
    }

    public int getx() {
        return x;
    }

}

class Derived1 extends Base1 {
    public int y;
    

    Derived1() {
        //super(0);
        System.out.println("This is Derived1 class Constructor");
    }

    Derived1(int a, int b){
        //super(a);
        System.out.println("this is overloaded Constructor Derived1 with value of b is " + b);
    }

    public void sety(int y) {
        this.y = y;
    }

    public int gety() {
        return y;
    }
}

class ChildofDerived extends Derived1{
    ChildofDerived(){
        System.out.println("I am a child of derived constructor ");
    }
    ChildofDerived(int a, int b, int c){
        super(a, b);
        System.out.println("this is overloaded Constructor ChildofDerived with value of c is " + c);
    }
    
}
public class oop_46_inheritance_in_constructor {
    public static void main(String[] args) {
        // Derived1 dv = new Derived1(5, 7);
        // dv.setx(5);
        // dv.sety(7);
        // System.out.println(dv.getx());
        // System.out.println(dv.gety());
        // ChildofDerived cd = new ChildofDerived(5, 7, 12);
        ChildofDerived cd = new ChildofDerived();
    }
}
