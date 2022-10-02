class Parent{
    public static void Ayush(){
        System.out.println("Hiiii");
    }
}
public class Override extends Parent{
    public static void Ayush(){
        System.out.println("Hello");
    }
    public static void main(String[] args) {
        Override.Ayush();
    }
}
