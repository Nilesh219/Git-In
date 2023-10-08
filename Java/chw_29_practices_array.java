public class chw_29_practices_array {
    public static void main(String[] args) {
        // problem 1
        // float [] marks = {25.5f, 76.5f, 78.5f, 82.5f, 79.2f};
        // float sum = 0;
        // for(float element: marks){
        //     sum = sum + element;
        // }
        // System.out.println("The total sum is " + sum);

        // problem 2
        // float [] marks = {25.5f, 76.5f, 78.5f, 82.5f, 79.2f};
        // float num = 76.5f;
        // boolean isInarray = false;
        // for(float element: marks){
        //     if(num == element){
        //         isInarray = true;
        //     }
        // }
        // if(isInarray){
        //     System.out.println("The value is present in the array");
        // }
        // else{
        //     System.out.println("The value is not present in the array");
        // }

        // problem 3
        // float [] marks = {25.5f, 76.5f, 78.5f, 82.5f, 79.2f};
        // float sum = 0;
        // for(float element: marks){
        //     sum = sum + element;
        // }
        // System.out.println("The total average is " + sum/marks.length);

        // problem 4
        // int [][] mat1 = {{1,2,3},
        //                  {4,5,6}};
        // int [][] mat2 = {{2,6,13},
        //                  {3,7,1}};
        // int [][] result = {{0,0,0},
        //                    {0,0,0}}; 
                
        // for(int i = 0; i < mat1.length; i++){
        //     for(int j = 0; j < mat1[i].length; j++){
        //         result[i][j] = mat1[i][j] + mat2[i][j];
        //     }
        // }

        // for(int i = 0; i < mat1.length; i++){
        //     for(int j = 0; j < mat1[i].length; j++){
        //         System.out.print(result[i][j] + " ");
        //         // result[i][j] = mat1[i][j] + mat2[i][j];
        //     }
        //     System.out.println("");
        // }

        // problem 5
        // int [] arr = {1, 21, 3, 4, 5, 34, 67};
        // int l = arr.length;
        // int n = Math.floorDiv(l, 2);
        // int temp;

        // for(int i = 0; i < n; i++){
        //     temp = arr[i];
        //     arr[i] = arr[l-i-1];
        //     arr[l-i-1] = temp;
        // }
        // for(int element: arr){
        //     System.out.print(element + " ");
        // }

        // problem 6
        // int [] arr = {1, 21, 3, 4, 5, 34, 67};
        // int max = Integer.MIN_VALUE;
        // for(int e: arr){
        //       if(e>max){
        //          max = e;
        //       }
        // }
        // System.out.println("the value of the maximum element in this array is : "+ max);

        // problem 7
        // int [] arr = {1, 21, 3, 4, 5, 34, 67};
        // int min = Integer.MIN_VALUE;
        // for(int e: arr){
        //     if(min>e){
        //         min = e;
        //     }
        // }
        // System.out.println("the value of the maximum element in this array is : "+ min);

        // problem 8
        // boolean isSorted = true;
        // int [] arr = {1, 12, 3, 4, 5, 34, 67};
        // for(int i = 0; i < arr.length-1; i++){
        //     if(arr[i] > arr[i+1]){
        //         isSorted = false;
        //         break;
        //     }
        // }
        // if(isSorted){
        //     System.out.println("The Array is sorted");
        // }
        // else{
        //     System.out.println("The Array is not sorted");
        // }
    }
}
