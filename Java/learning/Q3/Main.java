import P2.*;
import P1.*;
import P3.*;
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        Shape s;
        System.out.println("1. Rect ; 2.Circle");
        int a=in.nextInt();
        switch(a){
        case 1:
            s = new Rectangle();
            s.input();
            System.out.println(s.area());
            break;
        case 2:
            s = new Circle();
            s.input();
            System.out.println(s.area());
            break;
        default:
            System.out.println("Wrong choice!");
}
}
}
