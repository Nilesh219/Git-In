class Employeenews{
    int salary;
    String name;

    public void setsalary(int s){
        salary = s;
    }
    public void setname(String n){
        name = n;
    }
    public String getname(){
        return name;
    }
    public int getsalary(){
        return salary;
    }
}
class cellphone{
    public void ring(){
        System.out.println("Ringing......");
    }
    public void vib(){
        System.out.println("Vibrating.....");
    }
}
class Square{
    int s1;
    int s2;
    int s3;
    int s4;
    int a;
    int p;

    public void setarea(int a1, int a2){
        s1 = a1;
        s2 = a2;
    }
    public int getarea(){
        a = (s1*s2);
        return a;
    }
    public void setperimeter(){
        p = (4*a);
    }
    public int getperimeter(){
        return p;
    }
}
class Rectangle{
    int length;
    int width;
    int a;
    int p;
    public void setarea(int l, int w){
        length = l;
        width = w;
        a = length*width;
    }
    public int getarea(){
        return a;
    }
    public void setperimeter(){
        p = (length + width)*2;
    }
    public int getperimeter(){
        return p;
    }
}
class TommyVecetti{
    public void hit(){
        System.out.println("hitting....");
    }
    public void run(){
        System.out.println("running....");
    }
    public void fir(){
        System.out.println("firing...");
    }
}
class Circle{
    float pi = 3.14f;
    float radius;
    float area;
    float diameter;
    float perimeter;

    public void setarea(float r){
        radius = r;
        area = pi*(radius*radius);
    }
    public float getarea(){
        return area;
    }
    public void setperimeter(float d){
        diameter = d;
        perimeter = pi*d;
    }
    public float getperimeter(){
        return perimeter;
    }
}
public class cwh_39__ch8ps {
    public static void main(String[] args) {

        // Problem 1
        // Employeenews nilesh = new Employeenews();
        // nilesh.setname("Nilesh");
        // nilesh.setsalary(2500000);
        // System.out.println(nilesh.getname());
        // System.out.println(nilesh.getsalary());

        // Problem 2
        // cellphone cell = new cellphone();
        // cell.ring();
        // cell.vib();

        // Problem 3
        // Square sq = new Square();
        // sq.setarea(5, 5);
        // System.out.println(sq.getarea());
        // sq.setperimeter();
        // System.out.println(sq.getperimeter());

        // Problem 4
        // Rectangle rec = new Rectangle();
        // rec.setarea(5, 7);
        // System.out.println(rec.getarea());
        // rec.setperimeter();
        // System.out.println(rec.getperimeter()); 

        // Problem 5
        // TommyVecetti tv = new TommyVecetti();
        // tv.hit();
        // tv.run();
        // tv.fir();

        // Problem 6
        // Circle clr = new Circle();
        // clr.setarea(7);
        // System.out.println(clr.getarea());
        // clr.setperimeter(14);
        // System.out.println(clr.getperimeter());
    }
}
