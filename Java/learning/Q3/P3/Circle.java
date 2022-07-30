package P3;
import java.util.*;
import P1.*;
public class Circle extends Shape{
    int r;
    public void input(){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter r");
        r=in.nextInt();
    }
    public double area(){
        return (3.14159265358*r*r);
    }
}
