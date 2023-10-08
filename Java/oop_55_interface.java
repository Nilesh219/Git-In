interface Bicycle{
    // In the Java programming language, an interface is a reference type, 
    // similar to a class, that can contain only constants, method signatures, default methods, static methods, and nested types. 
    // Method bodies exist only for default methods and static methods

    int a = 7;
    void Breakup(int decrement);
    void Speedup(int increment);
}

interface Blowhorn{

    int x = 77;
    void blowpeep();
    void blowpop();
}

class OneBicycle implements Bicycle, Blowhorn{

    int x = 5; // it change value of x

    public void Breakup(int decrement){
        System.out.println("Break the Bicycle.....");
    }

    public void Speedup(int increment){
        System.out.println("Speed up th Bicycle.....");
    }

    public void blowpeep(){
        System.out.println("peep peep peep peep.....");
    }
    public void blowpop(){
        System.out.println("pop pop pop pop.....");
    }
}
public class oop_55_interface {
    public static void main(String[] args) {
        OneBicycle nilcy = new OneBicycle();
        nilcy.Breakup(7);
        nilcy.Speedup(8);
        
        nilcy.blowpeep();
        nilcy.blowpop();

        // You can create properties in interfaces
        // System.out.println(nilcy.a);
        // System.out.println(nilcy.x);

        // you cannot modify the properties in Interface as they are final
        // nilcy.a = 45;
        // System.out.println(nilcy.a);

        System.out.println(nilcy.x);

    }
}
