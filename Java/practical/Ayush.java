interface A {
    abstract void a1();

    abstract void a2();
}

public class Ayush implements A {
    public void a1() {
        System.out.println("Hi");
    }

    public void a2() {
        System.out.println("hiiii");
    }

    public static void main(String args[]) {
        A ob = new Ayush();
        ob.a1();
        ob.a2();
    }
}
