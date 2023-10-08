//Example to understand this concept are Phone and SmartPhone two object 
//are created
class Phone{
    public void on(){
        System.out.println("Phone Turn on....");
    }

    public void greet(){
        System.out.println("Good Morning");
    }

}

class SmartPhone extends Phone {
    public void on(){
        System.out.println("SmartPhone Turn on....");
    }

    public void swagat(){
        System.out.println("Aapka swagat hai");
    }
}
public class opp_49_dyanimc_method_dispatch {
    public static void main(String[] args) {
        // Phone ph = new Phone();
        // SmartPhone sph = new SmartPhone();

        Phone ph = new SmartPhone();
        // SmartPhone sph = new Phone(); //Not Allowed

        ph.on();
        ph.greet();
        //ph.swagat(); //Not allowed

    }
}
