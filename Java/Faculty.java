public class Faculty{
    int fac_id;
    String fac_name;

    void display(){
        System.out.print("Faculty id: ");
        System.out.println(this.fac_id);
        System.out.print("Faculty name: ");
        System.out.println(this.fac_name);
    }
    public static void main(String[] args){
        Faculty f1= new Faculty();
        f1.fac_id= 20;
        f1.fac_name= "Amit";
        Faculty f2= new Faculty();
        f2.fac_id= 30;
        f2.fac_name= "Raj";
        f1.display();
        f2.display();
    }
}