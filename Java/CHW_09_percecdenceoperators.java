public class CHW_09_percecdenceoperators {
    public static void main(String[] args) {
        // Precedence and Associativity
        //int a = 6*5 - 34/2;
        /*
            Highest Precedence go to * and /. They are then evaluated on the basis
            of left to rigth associativity
            =30 - 17
            =13
            it will be go left to right percedence is higher * and / 
        */
        //int b = 34/2 - 6*5;
        /*
            =17 - 30
            =-13
            it will be go left to right percedence is hiher * and / 
        */
        //System.out.println(a);
        //System.out.println(b);

        // Quick Quiz
        
        //int x = 6;
        //int y = 1;

        //int k = x * y/2;
        //System.out.println(k);

        int a = 5;
        int b = 1;
        int c = 4;

        int k = b*b - 4*a*c/2*a; //it wil a go upper not give right answer
        int k1 = b*b - (4*a*c)/(2*a); // --> () highest Precedence it will give right answer

        System.out.println(k);
        System.out.println(k1);
    }
}
