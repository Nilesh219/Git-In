class Ekclass{
    int a;
    
    Ekclass(int a){
        this.a = a;
    }

    public int getA(){
        return a;
    }

    public int returnone(){
        return 1;
    }
}

class Doclass extends Ekclass {
    Doclass(int c){
        super(c);
        System.out.println("I am Constructor");
    }
}
public class oop_47_this_super {
    public static void main(String[] args) {
        // Ekclass e = new Ekclass(65);
        Doclass d = new Doclass(7);
        System.out.println(d.getA());
    }
}
