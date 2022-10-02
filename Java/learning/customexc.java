import java.util.*;
class createexc extends Exception
{
    String n;
    createexc(String x)
    {
        n=x;
    }
    public String toString()
    {
        return "First letter of name is not capital "+n;
    }
}
public class customexc {
    static String s;
    void test()throws createexc
    {
        char ch=s.charAt(0);
        if(ch>='A'&&ch<='Z')
            System.out.println("good name");
        else
            throw new createexc(s);
    }
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter name - ");
        s=sc.nextLine();
        customexc obj=new customexc();
        try{
            obj.test();
        }
        catch(createexc e ){
            System.out.println(e);
        }
    }
}