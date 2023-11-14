interface Camera{
    void takesnap();
    void recordvideo();
    private void greet(){
        System.out.println("Good Morning.");
    }

    default void record4kVideo(){
        greet();
        System.out.println("Recording in 4k....");
    }
}
interface Wifi{
    String[] getnetworks();
    void Connectionnetworks(String network);
}

class CellPhone2{
    void PhoneNum(int phonenum){
        System.out.println("contact " + phonenum);
    }

    void ringphone(){
        System.out.println("rining phone....");
    }
}

class SmartPhone2 extends CellPhone2 implements Camera, Wifi{
    public void takesnap(){
        System.out.println("Taking snap...");
    }
    public void recordvideo(){
        System.out.println("recording voide.....");
    }

    public String[] getnetworks(){

        System.out.println("Getting list of networks...");
        String[] networkList = {"nilesh", "anuj", "lavada"};
        return networkList;

    }

    public void Connectionnetworks(String network){
        System.out.println("Connecting to " + network);
    }

}
public class opp_57_interface_default_methods {
    public static void main(String[] args) {
        SmartPhone2 obj = new SmartPhone2();
        obj.record4kVideo();
        String[] ar = obj.getnetworks();
        for(String item: ar){
            System.out.println(item);
        }
        obj.takesnap();
        obj.ringphone();
        obj.PhoneNum(443987894);
        // obj.greet() //it will give error...
    }
}
