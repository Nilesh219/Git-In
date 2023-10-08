public class cwh_34_recursion {
    static int factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }
    static int factorial_iterative(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        else{
            int product = 1;
            for(int i = 1; i <= n; i++){
                product *= i;
            }
            return product; 
        }
    }
    static void fun1(int n){
        if(n>0){
            System.out.println(n);
            fun1(n-1);
        }
    }
    static void fun2(int n){
        if(n>0){
            fun2(n-1);
            System.out.println(n);
        }
    }
    public static void main(String[] args) {
        int x = 5;
        int x1 = 3;
        System.out.println("The value of factorial x is " + factorial(x));
        System.out.println("The value of factorial x is " + factorial_iterative(x1));

        // int n = 3;
        // fun1(n);

        // int n = 3;
        // fun2(n);
    }
}
