import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Demo3{
    public static void main(String[] args)throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a string");
        int a = in.read();
        System.out.println(a);
    }
}