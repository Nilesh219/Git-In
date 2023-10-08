class A{
    public int x;
    public void method(){
        System.out.println("This is class A method");
    }
    public void setx(int x){
        this.x = x;
    }
    public int getx(){
        return x;
    }
}
class B extends A{
    @Override
    public void setx(int x){
        this.x = x;
    }
    public int getx(){
        return x;
    }
    public void method(){
        System.out.println("This is class B method");
    }
}
public class oop_48_method_override {
    public static void main(String[] args) {
        A a = new A();
        a.method();

        B b = new B();
        b.method();
        //Separtely call the method because override

        a.setx(5);
        System.out.println(a.getx());

        b.setx(7);
        System.out.println(b.getx());
    }
}
