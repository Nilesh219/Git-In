public class chw_32_method_overloading {
    static void tellJoke(){
        System.out.println("I invented a new word!\n" + "Plagiarism!");
    }

    static void change(int x){
        x = 7;
    }
    static void change2(int [] array){
        array[0] = 12;
    }
    static void foo(){
        System.out.println("Good Morning bro! ");
    }
    static void foo(int a){
        System.out.println("Good Morning " + a + " bro!");
    }
    static void foo(int a, int b){
        System.out.println("Good Morning " + a + " bro!");
        System.out.println("Good Morning " + b + " bro!");
    }
    public static void main(String[] args) {
        // tellJoke();

        // Case 1 : change the Integer
        // int a = 45;
        // change(a);
        // System.out.println("The value of x after running change is:  "+ a);
        // value does not change because it copy the value form function

        // Case 2 : Changing the Array
        // int [] marks = {2, 4, 5, 7, 8, 10};
        // change2(marks);
        // System.out.println("The value of marks after running change is:  "+ marks[0]);
        // value will be changed because array pass as refernce in function

        // Method Overloading
        foo();
        foo(3000);
        foo(3000,4000);
        // Arguments are actual!

    }
}
