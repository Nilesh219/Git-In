import java.util.Scanner;
public class oop_79_Exception {
    public static void main(String[] args) {
        // Syntax Error
        // int a = 7 Error: Semicolen
        // b = 5; Error: b is not declered


        //Logic Error
        //Consider i want to print prime Number
        //2 3 5 7 11 
        // System.out.println(2);
        // for(int i = 1; i < 5; i++){
        //     System.out.println(2*i+1);
        // }
        // it give a answer but there are Excpection catch here
        // is that 9 will not a prime number beacuse it will 
        // gives us Logical Exception Error

        // Runtime Error
        // int a = 7;
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();

        System.out.println(10000/k);

        //it will Exception when give the error in give the 0 in input
    }
}
