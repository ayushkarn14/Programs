import java.io.*;
public class Comm{
    public static void main(String args[]){
        String b;
        try{
            BufferedReader ob = new BufferedReader(new FileReader("abc.txt"));
            BufferedWriter ob1 = new BufferedWriter(new FileWriter("xyz.txt"));
            while((b=ob.readLine())!=null){
                if((b.substring(0,2)).equals("//"))
                    ob1.write(b+"\n");
            }
            System.out.println("Done");
            ob.close();
            ob1.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
