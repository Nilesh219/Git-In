
public class chw_27_array {

    public static void main(String[] args) {
        int arr[] = {25, 78, 79, 89, 70};
        System.out.println(arr.length);

        /*
        float [] marks = {98.5f, 45.5f, 79.5f, 99.5f, 80.5f};
        String [] students ={"Harry", "Rohan", "Shubham", "Lovish"};
        System.out.println(students.length);
        System.out.println(students[2]);
        */

        // System.out.println("printing the array element: ");
        // for(int i = 0; i<arr.length; i++){
        //     System.out.println(arr[i]);
        // }

        // print the array element in reverse order
        // System.out.println("printing the reverse array element: ");
        // for(int i = arr.length-1; i >= 0; i--){
        //     System.out.println(arr[i]);
        // }

        // Quick Quiz: Displaying the Array (for-each loop)
        System.out.println("Printing using for-each loop");
        for(int element: arr){
            System.out.println(element);
        }
    }
}