import java.util.Scanner;
public class chw_17_logical {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("For Logical AND ....");
        boolean a = true;
        boolean b = true;
        boolean c = true;

        if(a && b && c){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }

        System.out.println("For Logical OR ....");
        boolean a1 = true;
        boolean b1 = true;
        boolean c1 = true;

        if(a1 && b1 && c1){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }

        System.out.println("For Logical NOT ....");
        boolean a2 = true;
        boolean b2 = true;
        System.out.println("Not (a2) is ");
        System.out.println(!a2);
        System.out.println("Not (b2) is ");
        System.out.println(!b2);
    }
}
