import java.io.*;
public class Main{
    public static void main(String args[])throws IOException{
        int b;
        try{
        FileInputStream fin= new FileInputStream("abc.txt");
        FileOutputStream fout= new FileOutputStream("def.txt");
        while((b=fin.read())!=-1){
            fout.write(b);
        }
        }
        catch(IOException e){
            System.out.println(e);
        }
    }
}
