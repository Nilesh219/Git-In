import java.util.Scanner;

public class chw_19_praticesset4 {
    public static void main(String[] args) {
        // Problem 1
        // int a = 10
        // if(a = 11){

        // }
        // Output it will be gives error

        // Problem 2
        /*
         * byte p, m, c;
         * Scanner sc = new Scanner(System.in);
         * 
         * System.out.print("Enter the physics marks = ");
         * p = sc.nextByte();
         * System.out.print("Enter the mathematics marks = ");
         * m = sc.nextByte();
         * System.out.print("Enter the chemistry marks = ");
         * c = sc.nextByte();
         * 
         * float avg = (p+m+c)/3.0f;
         * System.out.println("Your total Avarge is " + avg);
         * if(avg > 40 && p > 33 && m > 33 && c > 33){
         * System.out.println("Your pass you are Promoted now ");
         * }
         * else{
         * System.out.println("Sorry you are fail You are not promoted Try again");
         * }
         */

        // Problem 3
        /*
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter you are Income in lack amount ");
        float tax = 0;
        float income = sc.nextFloat();
        if (income <= 2.5f) {
            tax = tax + 0;
        } else if (income > 2.5f && income <= 5f) {
            tax = tax + 0.05f * (income - 2.5f);
        } 
        else if (income > 5f && income <= 10.0f) {
            tax = tax + 0.05f * (5.0f - 2.5f);
            tax = tax + 0.2f * (income - 5f);
        } 
        else if (income > 10.0f) {
            tax = tax + 0.05f * (5.0f - 2.5f);
            tax = tax + 0.2f * (10.0f - 5f);
            tax = tax + 0.3f * (income - 10.0f);
        }
        System.out.println("The total tax paid by the empolyee is: " + tax); */

        // Problem 4
        /* 
        Scanner sc = new Scanner(System.in);
        int day = sc.nextInt();

        switch(day){
            case 1 -> System.out.println("Monday");
            case 2 -> System.out.println("Tuesday");
            case 3 -> System.out.println("Wednesday");
            case 4 -> System.out.println("Thursday");
            case 5 -> System.out.println("Friday");
            case 6 -> System.out.println("Saturday");
            case 7 -> System.out.println("Sunday");*/

            // Problem 5
            // Scanner sc = new Scanner(System.in);
            // System.out.print("Enter you are website: ");
            // String website = sc.next();
            // if(website.endsWith(".org")){
            //     System.out.println("This is an Organizational website");
            // }
            // else if(website.endsWith(".com")){
            //     System.out.println("This is a Commercial website");
            // }
            // else if(website.endsWith(".in")){
            //     System.out.println("This is an Indain website");
            // }
            
            // Problem 6
            //Enter year it will till you it is leap year
            int year;
            System.out.print("Enter the year: ");
            Scanner sc = new Scanner(System.in);
            year = sc.nextInt();

            if(leapyear(year)){
                System.out.println(year + " is a leap year.");
            }
            else{
                System.out.println(year + " is not a leap year.");
            }
            
        
    }

    public static boolean leapyear(int year){
            return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));    
        }
}
