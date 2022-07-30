package P3;
import P1.Shape;
import java.util.Scanner;
public class Circle extends Shape{
    Scanner in = new Scanner(System.in);
    int r;
    public void getdata(){
        System.out.print("Enter radius: ");
        r=in.nextInt();
    }
    public float area(){
        return (3.14159F*r*r);
    }
}