import java.io.*;
import java.util.*;

public class copy {
    public static void main(String[] args) {
        try {

            FileInputStream in = new FileInputStream(new File("input.txt"));
            FileOutputStream out = new FileOutputStream(new File("output.txt"));

            int n;
            while ((n = in.read()) != -1) {
                out.write(n);
            }
            if (in != null)
                in.close();
            if (out != null)
                out.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
