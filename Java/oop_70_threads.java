class Thread1 extends Thread{
    @Override
    public void run(){
        int i = 0;
        while(i < 20){
        System.out.println("hi hello class therad1 ");
        System.out.println("I am happy");
        i++;
    }
    }
    
}
class Thread2 extends Thread{
    @Override
    public void run(){
         int i = 0;
        while(i < 20){
        System.out.println("hi hello class therad2 ");
        System.out.println("I am sad");
        i++;
    }
    }
   
}
public class oop_70_threads{
    public static void main(String[] args){
        Thread1 th1 = new Thread1();
        Thread2 th2 = new Thread2();

        th1.start();
        th2.start();
    }
}
