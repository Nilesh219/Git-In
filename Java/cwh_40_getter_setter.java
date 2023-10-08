class Employeeln{
    private int id;
    private String name;

    public void setname(String name){
        
        if(name != null && !name.isEmpty() && !containsOnlyDigits(name)){
            this.name = name;
        }
        else{
            System.out.println("Invaild name. Please provide a positive name.");
        }
    }
    private boolean containsOnlyDigits(String str){
        return str.matches("\\d+");
    }
    public String getname(){
        return name;
    }
    public void setId(int id){
        if(id > 0){
            this.id = id;
        }
        else{
            System.out.println("Invaild ID. Please provide a positive ID.");
        }
    }
    public int getId(){
        return id;
    }
}
public class cwh_40_getter_setter {
    public static void main(String[] args) {
        Employeeln emp = new Employeeln();
        emp.setname("nilesh kadam");
        System.out.println(emp.getname());
        emp.setId(101);
        System.out.println(emp.getId());
    }
}
