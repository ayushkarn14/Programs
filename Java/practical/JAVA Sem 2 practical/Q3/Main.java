import java.util.Scanner;
import P2.*;
import P3.*;

public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.println("Circle: 1    Rectangle: 2");
        int c = in.nextInt();
        switch (c) {
            case 1:
                Circle ob1 = new Circle();
                ob1.getdata();
                System.out.println("Area = " + ob1.area());
                break;
            case 2:
                Rectangle ob2 = new Rectangle();
                ob2.getdata();
                System.out.println("Area = " + ob2.area());
                break;
            default:
                System.out.println("Wrong Choice!");
        }

    }
}