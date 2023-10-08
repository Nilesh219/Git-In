/*
 * public static void foo(int ...arr){
 *      arr is available here as int[] arr
 *
 * }
 * 
 * 
 */
public class cwh_33_variable_arguments{
    static int add(int ...arr){
        int result = 0;
        for(int a : arr ){
            result = result + a; 
        }
        return result;
    }
    public static void main(String[] args) {
        System.out.println(add(1,2));
        System.out.println(add(1,2,3));
        System.out.println(add(1,2,4,5));
    }
}