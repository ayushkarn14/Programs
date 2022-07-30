package P2;

import P1.Shape;
import java.util.Scanner;

public class Rectangle extends Shape {
    float l, b;
    Scanner in = new Scanner(System.in);

    public void getdata() {
        System.out.print("Enter length: ");
        l = in.nextInt();
        System.out.print("Enter breath: ");
        b = in.nextInt();
    }

    public float area() {
        return (l * b);
    }
}