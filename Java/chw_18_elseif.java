import java.util.Scanner;
public class chw_18_elseif {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /* 
        System.out.print("Enter your age = ");
        int age = sc.nextInt();

        switch(age){
            case 18:
                System.out.println("You are going to become an Adult!");
                break;

            case 20:
                System.out.println("You are going to become an Adult");
                break;

            case 23:
                System.out.println("You are going to join Job");
                break;

            case 60:
                System.out.println("You are going to get retired");
                break;

            default:
                System.out.println("Enjoy Your life!");
        }*/

        char var = 'N';

        switch(var){
            case 'N':
                System.out.println("You are going to become an Adult!");
                break;

            case 'r':
                System.out.println("You are going to become an Adult");
                break;

            case 's':
                System.out.println("You are going to join Job");
                break;

            case 'm':
                System.out.println("You are going to get retired");
                break;

            default:
                System.out.println("Enjoy your life");
        }
        /*
        if(age > 56){
            System.out.println("You are experienced!");
        }
        else if(age > 46){
            System.out.println("You are semi-experienced");
        }
        else if(age > 36){
            System.out.println("You are semi-semi-experienced");
        }
        else{
            System.out.println("You are not experineced");
        }
        if(age>2){
            System.out.println("You ar not a baby!");
        } */
    }
}
