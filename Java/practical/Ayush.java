interface A {
    int a=19;
    default void a1(){
        System.out.println("My name is Apurva Karn");
    }
}
interface B{
    void a2();
}
public class Ayush implements A,B {
    public void a2() {
        System.out.println("hiiii");
    }

    public static void main(String args[]) {
        Ayush ob = new Ayush();
        ob.a1();
        System.out.println(a);
        ob.a2();
    }
}
 