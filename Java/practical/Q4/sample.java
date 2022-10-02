import java.io.*;

public class sample {
    public static void main(String[] args) {
        try {
            throw new FileNotFoundException();
        } catch (FileNotFoundException e) {
            System.out.println(e);
        }
    }
}
