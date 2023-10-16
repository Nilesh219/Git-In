class Myth1 extends Thread{
    Myth1(String name){
        super(name);
    }
    public void run(){
        int i = 34;
        // System.out.println("Thank you " + this.getName());
        while(true){
            System.out.println("Thank you: " + this.getName());
        }
    }
}
public class oop_74_thread_priorities {
    public static void main(String[] args) {

        // queue priorities t1, t2, t3, t4, t5
        Myth1 t1 = new Myth1("Nilesh");
        Myth1 t2 = new Myth1("Joshua1");
        Myth1 t3 = new Myth1("Joshua2");
        Myth1 t4 = new Myth1("Joshua3");
        Myth1 t5 = new Myth1("Joshua4 (most important)");

        t5.setPriority(Thread.MAX_PRIORITY);
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);
        t3.setPriority(Thread.MIN_PRIORITY);
        t4.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();


    }
}
