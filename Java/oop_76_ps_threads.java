class Thread11 extends Thread{
    public void run(){
        
        while(true){
            System.out.println("Good Morning ");
        }
    }
}
class Thread22 extends Thread{
    public void run(){
        while(true){
            System.out.println("Welcome");
        }
    }
}
class Thread12 extends Thread{
    public void run(){
        try {
            Thread.sleep(200);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Welcome");
    }
}
class Thread23 extends Thread{
    public void run(){
        
            System.out.println("Good Morning");
        
    }
}
class Thread13 extends Thread{
    public void run(){
        System.out.println("Good Moring ");
    }
}
class Thread24 extends Thread{
    public void run(){
        System.out.println("welcome");
    }
}

class Pratices1 extends Thread{
    public void run(){
        while(true)
        {
            System.out.println("Good Moring");
        }
        
    }
}

class Pratices2 extends Thread{
    public void run(){
//        while(false){
//            try {
//                Thread.sleep(200);
//            }
//            catch (Exception e){
//                System.out.println(e);
//            }
//            System.out.println("Welcome");
//        }
    }

}

public class oop_76_ps_threads{
    public static void main(String[] args){
        //problem 1
        // Thread11 t11 = new Thread11();
        // Thread22 t22 = new Thread22();

        // t11.start();
        // t22.start();

        //problem 2
        // Thread12 t12 = new Thread12();
        // Thread23 t23 = new Thread23();
        // t12.start();
        // t23.start();

        //problem 3
        // Thread13 t13 = new Thread13();
        // Thread24 t24 = new Thread24();
        // t13.start();
        // t24.start();

        // t13.setPriority(5);
        // t24.setPriority(1);

        // System.out.println(t13.getPriority());
        // System.out.println(t24.getPriority());

        // problem 4
        Pratices1 p1 = new Pratices1();
        Pratices2 p2 = new Pratices2();

        
        System.out.println(p1.getPriority());
        System.out.println(p2.getPriority());
        System.out.println(p2.getState());

        // p1.start();
        p2.start();

        System.out.println(p2.getState());
        System.out.println(Thread.currentThread().getState());

    }
}
