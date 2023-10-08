public class chw_28_array {
    public static void main(String[] args) {
        int[][] flat; // 2D array
        flat = new int[2][3];

        flat[0][0] = 101;
        flat[0][1] = 102;
        flat[0][2] = 103;
        flat[1][0] = 104;
        flat[1][1] = 105;
        flat[1][2] = 106;

        // Display the 2D array
        System.out.println("Printing a 2-D array using for loop");
        for(int i=0;i<flat.length;i++){
            for(int j=0;j<flat[i].length;j++) {
                System.out.print(flat[i][j]);
                System.out.print(" ");
            }
            System.out.println(" ");
        }
    }
}
