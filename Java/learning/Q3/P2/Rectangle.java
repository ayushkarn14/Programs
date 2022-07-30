package P2;
import P1.*;
import java.util.Scanner;
public class Rectangle extends Shape{
    int l,b;
    public void input(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter length: ");
        l=in.nextInt();
        System.out.print("Enter breadth: ");
        b=in.nextInt();
    }
    public double area(){
        return l*b;
    }
}
