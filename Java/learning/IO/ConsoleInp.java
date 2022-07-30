import java.io.*;

class ConsoleInp {
    public static void main(String[] args) throws IOException {
        InputStreamReader ob = new InputStreamReader(System.in);
        BufferedReader obj = new BufferedReader(ob);
        System.out.println("Enter a string");
        int n;
        n = Integer.parseInt(obj.readLine());
        System.out.println(n);
    }
}