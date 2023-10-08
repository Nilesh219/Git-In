class calculate {

    int multiply(int a, int b){
            return a*b;
    }
    double multiply(double a, double b){
            return a*b;
    }
    int multiply(int a, int b, int c){
        return a*b*c;
    }

    public static void main(String[] args) {
        calculate obj = new calculate();
        
        int c = obj.multiply(5, 7);
        double d = obj.multiply(5.1, 4.2);
        int c1 = obj.multiply(5, 7, 9);

        System.out.println("Mutiply method : return integer : " + c);
        System.out.println("Mutiply method : return integer : " + d);

        System.out.println(c1);

    }
}
