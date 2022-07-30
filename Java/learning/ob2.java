import java.util.*;

public class ob2 extends ob {
    public ob2() {
        super(0);
    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number");
        int num = in.nextInt();
        ob obj = new ob(num);
        obj.prime();
    }
}