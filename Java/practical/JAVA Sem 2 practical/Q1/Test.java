import java.util.Scanner;
public class Test {
    public static void main(String args[]) {
        float w, x, y, z;
        Scanner in = new Scanner(System.in);
        Complex ob = new Complex();
        System.out.println("First Number:");
        System.out.print("Real part? ");
        w = in.nextFloat();
        System.out.println("Imaginary part? ");
        x = in.nextFloat();
        System.out.println();
        System.out.println("Second Number:");
        System.out.print("Real part? ");
        y = in.nextFloat();
        System.out.println("Imaginary part? ");
        z = in.nextFloat();
        ob.add(w,x,y,z);
        ob.tostring();
        ob.multiply(w,x,y,z);
        ob.tostring();
    }
}
