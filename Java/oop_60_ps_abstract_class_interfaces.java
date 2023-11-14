abstract class Pen{
    abstract void write();
    abstract void refill();
}

class FountainPen extends Pen{
    void write(){
        System.out.println("Writing .....");
    }
    void refill(){
        System.out.println("Refill...");
    }
    void changeNib(){
        System.out.println("Changing the nib...");
    }
}

class Monkey{
    void jump(){
        System.out.println("Jumping....");
    }
    void bite(){
        System.out.println("Biting...");
    }
}
interface BasicAnimals{
    void eat();
    void sleep();
}
class Human extends Monkey implements BasicAnimals{
    void speak(){
        System.out.println("Hello sir!");
    }
    public void eat(){
        System.out.println("Eating...");
    }
    public void sleep(){
        System.out.println("Sleeping...");
    }
}

abstract class TelePhone{
    abstract void with();
    abstract void lift();
    abstract void disconnected();

}
class SmartTelePhone extends TelePhone{
    void with(){
        System.out.println("With...");
    }
    void lift(){
        System.out.println("lift....");
    }
    void disconnected(){
        System.out.println("disconnected....");
    }    
}

interface Tvremote{
    void tvon();   
}
interface SmartTvremote extends Tvremote{
    void stvon();
}

class Tvremote2 implements SmartTvremote{
    public void tvon(){
        System.out.println("Tv ON....");
    }
    public void stvon(){
        System.out.println("Smat Tv ON...");
    }
}

interface Tvrmote3{
    void tvon();
}
class Tv implements Tvrmote3{ 
    public void tvon(){
        System.out.println("Tv ON....");
    }
}
public class oop_60_ps_abstract_class_interfaces {
    public static void main(String[] args) {

        // // Problem 1 and 2
        // FountainPen fp = new FountainPen();
        // fp.write();
        // fp.refill();
        // fp.changeNib();

        // Problem 3
        // Human nilesh = new Human();
        // nilesh.sleep();

        // Problem 4
        // SmartTelePhone stp = new SmartTelePhone();
        // stp.with();
        // stp.lift();
        // stp.disconnected();

        // Problem 5
        // Monkey m1 = new Human();
        // m1.jump();
        // m1.bite();
        // m1.speak() --> cannot use speak methods because the refernce is monkey which does not have speak methods

        // BasicAnimals aniket = new Human();
        // // aniket.speak(); --> error
        // aniket.eat();
        // aniket.sleep();

        // Problem 6
        // Tvremote2 tvr = new Tvremote2();
        // tvr.tvon();
        // tvr.stvon();

        // Problem 7
        Tv  tv = new Tv();
        tv.tvon(); 



        


    }
}
