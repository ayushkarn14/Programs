import java.io.*;

public class CopyComm {
    public static void main(String args[]) {
        String b;
        try {
            BufferedReader ob1 = new BufferedReader(new FileReader("from.txt"));
            BufferedWriter ob2 = new BufferedWriter(new FileWriter("to.txt"));
            while ((b = ob1.readLine()) != null) {
                if (b.substring(0, 2).equals("//")) {
                    ob2.write(b + "\n");
                }
            }
            System.out.println("Work done");
            ob1.close();
            ob2.close();
        } catch (Exception e) {
            System.out.println("Work not done");
            System.out.println(e);
        }

    }
}
