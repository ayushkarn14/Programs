import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int x1,y1,x2,y2;
        System.out.println("Number 1: ");
        System.out.print("Real part: ");
        x1=in.nextInt();
        System.out.print("Imaginary part: ");
        y1=in.nextInt();
        System.out.println("Number 2: ");
        System.out.print("Real part: ");
        x2=in.nextInt();
        System.out.print("Imaginary part: ");
        y2=in.nextInt();
        Complex ob1=new Complex(x1,y1);
        Complex ob2=new Complex(x2,y2);
        System.out.println("Number 1: "+ob1);
        System.out.println("Number 2: "+ob2);

        System.out.println("Sum = "+ob1.add(ob2));
        System.out.println("Product = "+ob1.multiply(ob2));
    }
}
