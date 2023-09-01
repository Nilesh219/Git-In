public class chw_16_ifelse {
    public static void main(String[] args) {
        int age = 20;

        if(age > 18){
            System.out.println("You can drive car");
        }
        else{
            System.out.println("You can't drive car");
        }

        boolean cond = (age>18);
        if(cond){
            System.out.println("You are Adult now Congrats");
        }
        else{
            System.out.println("You are not adult!");
        }
    }
}
