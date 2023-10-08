class Base{
    public int x;

    public void setx(int x){
        System.out.println("This is Base class..");
        this.x = x;
    }

    public int getx(){
        return x;
    }

}

class Derived extends Base{
    public int y;

    public void sety(int y){
        System.out.println("This is Derived class..");
        this.y = y;
    }
    public int gety(){
        return y;
    }
}

class Animal{
    public int legs;
    public String name;

    public void setlegs(int l){
        legs = l;
    }
    public void setname(String n){
        name = n;
    }
    
}

class Dog extends Animal{
    int bork;

    public void dogbork(int b){
        bork = b;
        System.out.println("Dogs bork at time " + bork);
    }

    public int getlegs(){
        return legs;
    }

    
}
public class cwh_45_inheritances {
    public static void main(String[] args) {
        // Derived dir = new Derived();
        // dir.setx(7);
        // System.out.println(dir.getx());
        
        // dir.sety(12);
        // System.out.println(dir.gety());

        Dog dg = new Dog();
        dg.setlegs(4);
        System.out.println("the Dog have " + dg.getlegs() + " legs");
        dg.dogbork(7);
        
    }
}
