import java.util.Scanner;

class Stack {
    static int arr[];
    static int p = -1, s = 0, num = 0;

    public static void testOver() throws OverFlow {
        if (p == s - 1)
            throw new OverFlow();
    }

    public static void testUnder() throws UnderFlow {
        if (p == -1)
            throw new UnderFlow();
    }

    public static void push() {
        try {
            Stack.testOver();
            arr[++p] = num;
        } catch (OverFlow e) {
            System.out.println(e);
        }
    }

    public static void pop(int size) {
        try {
            Stack.testUnder();
            System.out.println(arr[p--] + " popped");
        } catch (UnderFlow f) {
            System.out.println(f);
        }
    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        s = in.nextInt();
        arr = new int[s];
        while (true) {
            System.out.println("1. Push; 2. Pop; 3 to print array; 69 to terminate");
            int input = in.nextInt();
            if (input == 1) {
                System.out.println("enter value to be push");
                num = in.nextInt();
                Stack.push();
            } else if (input == 2) {
                Stack.pop(s);
            } else if (input == 3) {
                for (int i = 0; i <= p; i++)
                    System.out.print(arr[i] + " ");
                System.out.println();
            } else if (input == 69)
                break;
            else
                System.out.println("Wrong Choice!");
        }
        in.close();
    }
}
