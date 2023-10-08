class Circle3{
    public int radius = 5;

    public double areac(){
        return Math.PI * radius * radius; 
    }

    public double volumec(){
        return 4/3 * Math.PI * radius * radius * radius;
    }

}

class Cylinder3 extends Circle3{
   public int height = 7;


    public double areacy(){
        return 2 * Math.PI * radius * height + 2 * Math.PI * radius * radius;  
    }

    public double volumecy(){
        return Math.PI * radius * radius * height;
    }

}

class Rectangle2{
    public int w = 6;
    public int l = 7;
    public int h = 8;
    

    public double arear(){
        return Math.PI * w * l;
    }

    public double volumer(){
        return l*w*h;
    }

}

class Cuboid2 extends Rectangle2{

    public int b = 9;
    public double areacu(){
        return 2 *(l*b + b*h + l*h);
    }

    public double volumecu(){
        return l*b*h;
    }


}
public class oop_52_ch10ps {
    public static void main(String[] args) {
        // Cylinder3 cy = new Cylinder3();
        // System.out.println(cy.areac());
        // System.out.println(cy.volumec());
        // System.out.println(cy.areacy());
        // System.out.println(cy.volumecy());


        Cuboid2 rec= new Cuboid2();
        System.out.println(rec.arear());
        System.out.println(rec.volumer());
        System.out.println(rec.areacu());
        System.out.println(rec.volumecu());
        
    }
}
