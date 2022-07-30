import java.io.FileInputStream;
import java.io.FileOutputStream;

public class CopyText {
    public static void main(String args[]) {
        int b;
        try {
            FileInputStream ob1 = new FileInputStream("from.txt");
            FileOutputStream ob2 = new FileOutputStream("to.txt");
            while ((b = ob1.read()) != -1) {
                if (!((char) b == 'a' || (char) b == 'e' || (char) b == 'i' || (char) b == 'o' || (char) b == 'u'
                        || (char) b == 'A' || (char) b == 'E' || (char) b == 'I' || (char) b == 'O' || (char) b == 'U'))
                    ob2.write((char) b);
            }
            System.out.println("Work done");
            ob1.close();
            ob2.close();
        } catch (Exception e) {
            System.out.println("Work not done");
        }

    }
}
