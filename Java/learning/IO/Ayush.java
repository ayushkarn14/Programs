import java.io.*;

class Ayush {
    public static void main(String args[]) {
        String b;
        try {
            // FileInputStream fin = new FileInputStream("from.txt");
            // FileOutputStream fout = new FileOutputStream("to.txt");
            BufferedReader fin = new BufferedReader(new FileReader("from.txt"));
            BufferedWriter fout = new BufferedWriter(new FileWriter("to.txt"));
            while ((b = fin.readLine()) != null) {
                fout.write(b);
                System.out.println("1");
            }
            fin.close();
            fout.close();
        } catch (Exception e) {
            System.out.println("File Not Found");
        }
    }
}