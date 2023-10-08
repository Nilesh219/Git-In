public class cwh_35_practiceset_methods {
    static void multiplication(int n){
        for(int i = 1; i <= 10; i++){
            System.out.printf("%d * %d = %d\n",n,i,n*i);
        }
    }
    static void pattern1(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static int sumRec(int n){
        if(n == 1){
            return 1;
        }
        else{
            return n + sumRec(n - 1);
        }
    }
    static void parttern2(int n){
        for(int i = n-1; i >= 0; i--){
            for(int j = 0; j < i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static int fib(int n){
        /*if(n == 1){
            return 0;  
        }
        else if(n == 2){
            return 1;
        }*/

        if(n == 1 || n == 2){
            return n-1;
        }
        else{
            return fib(n-1) + fib(n-2);
        }
    }
    static int avg(int a, int b, int c, int x){
        return (a+b+c)/x;
    }
    static void pattern1_rec(int n){
        if(n > 0){
            pattern1_rec(n-1);
            for(int i = 0; i < n; i++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static void parttern2_rec(int n){
        if(n > 0){
            for(int i = n-1; i >= 0; i--){
                System.out.print("*");
            }
            System.out.println();
            parttern2_rec(n-1);
        }
    }
    static float ctof(float n){
        return (n*9/5f)+32f;
    }
    static int sumite(int n){
        int product = 0;
        for(int i = 0; i <= n; i++){
            product += i;
        }
        return product;
    }
    public static void main(String[] args) {
        // Problem 1
        // multiplication(7);

        // Problem 2
        // pattern1(4);

        // problem 3
        // int c = sumRec(5);
        // System.out.println(c);

        // Problem 4
        // parttern2(4);

        // Porblem 5
        // fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
        // int result = fib(7); //8
        // System.out.println(result);

        // Problem 6
        // int n = 3;
        // int ans = avg(3,4,5,n);
        // System.out.println(ans);

        // Problem 7
        // parttern2_rec(4);

        // Problem 8
        // pattern1_rec(4);

        // Problem 9
        // System.out.println("converted into celsius to fahrenheit " +  ctof(30f));

        // Problem 10
        int result = sumite(5);
        System.out.println(result);


    }
}
