import java.util.Scanner;

public class exceptionDemo {
    public void test(int y) throws UnderAge {
        if (y < 18)
            throw new UnderAge(y);
    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Age : ");
        int a = in.nextInt();
        exceptionDemo ob = new exceptionDemo();
        try {
            ob.test(a);
            System.out.println("Adult");
        } catch (UnderAge e) {
            System.out.println(e.display());
        }
    }
}
