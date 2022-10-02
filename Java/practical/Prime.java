import java.util.Scanner;

public class Prime {
    int fib(int x) {
        if (x == 1)
            return 0;
        if (x == 2)
            return 1;
        return (fib(x - 1) + fib(x - 2));
    }

    boolean prime(int x) {
        int p = 0;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0)
                p++;
        }
        if (p == 2)
            return true;
        return false;
    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = in.nextInt();
        Prime ob = new Prime();
        if (n >= 2 && n <= 100) {
            if (ob.prime(n)) {
                System.out.println("Number is prime");
                for (int i = 1; i <= n; i++)
                    System.out.println(ob.fib(i));

            } else {
                System.out.println("Not prime");
            }

        } else {
            System.out.println("Number not in range");

        }
    }
}
