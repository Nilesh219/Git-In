interface Camera2{
    void takephoto();
    void takeselfi();
    private void greet(){
        System.out.println("Good Morning..");
    }
    default void record4kvideo(){
        greet();
        System.out.println("Recording in 4k voide.....");
    }
}

interface Wifi2{
    String[] getNetworks();
    void connectNetwork(String Network);
}

class CellPhone3{
    public String[] contactlist(){
        System.out.println("Contact list...");
        String[] contactlist = {"+91 54654655654 - Nilesh","+91 4583495443 - Joshua"};
        return contactlist;
    }

    public void CallNumber(String name){
        System.out.println("Calling to ......." + name);
    }
}

class SmartPhone3 extends CellPhone3 implements Camera2, Wifi2{

        public void gps(){
            System.out.println("Find you device through gps..");
        }
        public void takephoto(){
            System.out.println("Taking you are Photo....");
        }
        public void takeselfi(){
            System.out.println("Taking you are Selfi.... ");
        }

        public String[] getNetworks(){
            System.out.println("the networks list...");
            String[] getNetworks = {"Wifi", "galaxya12", "andriod3.5"};
            return getNetworks;
        }
        public void connectNetwork(String name){
            System.out.println("Connecting...Wifi network.. " + name);
        }
}
public class oop_59_polymorphism_in_interface {
    public static void main(String[] args) {
        Camera2 cam = new SmartPhone3();
        cam.takephoto();
        cam.takeselfi();
        cam.record4kvideo();

        System.out.print("\n");
        
        // cam.contactlist(); //--> can not run this it only run Camera refernce as
        
        // System.out.println(cam.getNetworks()); // --> can not run......

        // cam.gps(); //--> can not run...

        // SmartPhone3 smart = new SmartPhone3();
        // String[] ar2 = smart.contactlist(); 
        // for(String item: ar2){
        //     System.out.println(item);
        // }
        // smart.CallNumber("Nilesh");
        // System.out.print("\n");
        // String[] ar3 = smart.getNetworks();
        // for(String item: ar3){
        //     System.out.println(item);
        // }
        // smart.connectNetwork("Wifi");
        // smart.gps();


    }
}
