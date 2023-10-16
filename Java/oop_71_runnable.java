


class ThreadRunnable1 implements Runnable{
    public void run(){
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
        System.out.println("I am class1 ThreadRunnable 1");
    }
}
class ThreadRunnable2 implements Runnable{
    @Override
    public void run(){
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
        System.out.println("I am class2 ThreadRunnable 2");
    }
}

public class oop_71_runnable {

    public static void main(String[] args) {
        ThreadRunnable1 th1 = new ThreadRunnable1();
        Thread t1 = new Thread(th1);

        ThreadRunnable2 th2 = new ThreadRunnable2();
        Thread t2 = new Thread(th2);

        t1.start();
        t2.start();

    }
}

