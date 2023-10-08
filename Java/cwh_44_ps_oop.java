class Cylinder{
    int height;
    int breadth;
    int radius;
    public void setheight(int height){
        this.height = height;
    }
    public void setradius(int radius){
        this.radius = radius;
    }
    public void setbreadth(int breadth){
        this.breadth = breadth;
    }

    public int getheight(){
        return height;
    }
     public int getbredth(){
        return breadth;
    }
    public int getradius(){
        return radius;
    }

    public double surfacearea(){
        return (2*3.14*radius*height) + (2*3.14*radius*radius);
    }
    public double volumesuerfacearea(){
        return 3.14*radius*radius*height;
    }

    Cylinder(int h, int c, int r){
        height = h;
        breadth = c;
        radius = r;

    }

}
class Ractanglenew{
    public int height;
    public int breadth;
    Ractanglenew(){
        System.out.println("this default constructor");
    }
    Ractanglenew(int h, int b){
        height = h;
        breadth = b;
    }
    public int geth(){
        return height;
    }
    public int getb(){
        return breadth;
    }
}

class Sphere{
    int radius;
    int diameter;

    public void setr(int r){
        radius = r;
    }
    public void setd(int d){
        diameter = d;
    }

    public int getr(){
        return radius;
    }
    public int getd(){
        return diameter;
    }
}
public class cwh_44_ps_oop {
    public static void main(String[] args){

        // Problem 1
        // Cylinder cy = new Cylinder(5, 7, 9);
        // cy.setheight(9);
        // System.out.println(cy.getheight());
        // cy.setbreadth(7);
        // System.out.println(cy.getbredth());
        

        // Porblem 2
        // cy.setradius(5);
        // System.out.println(cy.surfacearea());
        // System.out.println(cy.volumesuerfacearea());

        // Problem 3   
        // System.out.println(cy.getradius());

        // // Problem 4
        // Ractanglenew rec  = new Ractanglenew(5,7);
        // System.out.println(rec.geth());
        // System.out.println(rec.getb());

        // Problem 5
        Sphere sp = new Sphere();
        sp.setr(4);
        sp.setd(9);
        System.out.println(sp.getr());
        System.out.println(sp.getd());

    }
}
