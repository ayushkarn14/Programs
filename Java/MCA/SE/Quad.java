import java.util.Scanner;

public class Quad {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the coefficients:");
        System.out.print("x^2 coefficient (a): ");
        int a = in.nextInt();
        System.out.print("x coefficient (b): ");
        int b = in.nextInt();
        System.out.print("Constant (c): ");
        int c = in.nextInt();

        double root1, root2;

        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
            root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
            System.out.format("root1 = %.2f and root2 = %.2f", root1, root2);
        } else if (discriminant == 0) {
            root1 = root2 = -b / (2.0 * a);
            System.out.format("root1 = root2 = %.2f", root1);
        } else {
            double real = -b / (2.0 * a);
            double imaginary = Math.sqrt(-discriminant) / (2.0 * a);
            System.out.format("root1 = %.2f + %.2fi", real, imaginary);
            System.out.format("\nroot2 = %.2f - %.2fi", real, imaginary);
        }

        in.close();
    }
}
