package P;
import java.util.Scanner;
import P2.*;
import P1.*;
class Main{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int x,y,z;
        System.out.print("x: ");
        x=in.nextInt();
        System.out.print("y: ");
        y=in.nextInt();
        TwoDim ob1=new TwoDim(x,y);
        System.out.print("x: ");
        x=in.nextInt();
        System.out.print("y: ");
        y=in.nextInt();
        System.out.print("z: ");
        z=in.nextInt();
        ThreeDim ob2=new ThreeDim(x,y,z);
        System.out.println(ob1);
        System.out.println(ob2);
    }
}
