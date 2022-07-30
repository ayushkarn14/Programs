import java.io.*;

public class CopyText {
    public static void main(String args[]) {
        int b;
        try {
            FileInputStream ob1 = new FileInputStream("from.txt");
            FileOutputStream ob2 = new FileOutputStream("to.txt");
            while ((b = ob1.read()) != -1) {
                ob2.write(b);
            }
            System.out.println("Work done");
            ob1.close();
            ob2.close();
        } catch (Exception e) {
            System.out.println("Work not done");
        }

    }
}
