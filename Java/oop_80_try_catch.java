public class oop_80_try_catch {
    float a = 5000f;
    float b = 5.0f;

    try{
        float c = (a/b);
        System.out.println("the Result is : " +  c);
    }
    catch(Exception e){
        System.out.println("We failed to divide. Reason: ");
        System.out.println(e);
    }
    System.out.println("End of the program");
}
