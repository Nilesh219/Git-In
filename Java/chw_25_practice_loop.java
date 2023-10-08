public class chw_25_practice_loop{
    public static void main(String[] args) {
        //problem 1
        // print this star pattern using for loop
        // ****
        // ***
        // **
        // *
        // int n = 4;
        //        for (int i=n; i>0; i--){
        //            for(int j=0;j<i;j++){
        //                System.out.print("*");
        //            }
        //            System.out.print("\n");
        //        }

        // problem 2
        // int n =4;
        // int sum = 0;

        // for(int i = 0; i<n; i++){
        //     sum = sum + (2*i);
        // }
        // System.out.println("The sum is even Number = " + sum);
        // (0,2,4,6) --> 12

        // Problem 3
        //pritnt 5 table
        // int n = 5;
        // for(int i = 1; i <= 10; i++){
        //     System.out.printf("%d * %d = %d\n",n,i,n*i);
        // }

        // Problem 4
        // print 10 table reverse order
        // int n = 10;
        // for(int i = 10; i >= 1; i--){
        //     System.out.printf("%d * %d = %d\n",n, i, n*i);
        // }

        // problem 6
        // find factorial using loop
        // 5--> 5*4*3*2*1 = 120
        // int n = 5;
        // int factorial = 1;
        // int i = 1;
        // while(i <= n){
        //     factorial *= i;
        //     i++;
        // }
        // System.out.println(factorial);

        // problem 7
        // print 8 table using asigment operator
        int n = 8;
        int sum = 0;
        for(int i =1; i<=n; i++){
            sum += n*i;
        }
        System.out.println(sum);
    }
}