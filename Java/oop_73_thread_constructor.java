
/**
 * oop_73_thread_priorities
 */
class Myth extends Thread{
    Myth(String name){
        super(name);
    }
    public void run(){
        int i = 34;
        System.out.println("Thank you");
        // while(true){
        //     System.out.println("Thank you: " + this.getName());
        // }
    }
}
public class oop_73_thread_priorities{

    public static void main(String[] args) {
        Myth t1 = new Myth("Nilesh");
        Myth t2 = new Myth("Joshua");
        
        t1.start();
        t2.start();

        System.out.println("The id of Thrread is " + t1.getId());
        System.out.println("The name of Thrread is " + t1.getName());
        System.out.println("The id of Thrread is " + t2.getId());
        System.out.println("The name of Thrread is " + t2.getName());
    }
}
