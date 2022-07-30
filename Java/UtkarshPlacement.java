import java.util.Scanner;
class UtkarshPlacement
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        String result[]=new String[t];
        String a[]=new String[3],x[]=new String[2];
        for(int i=0;i<t;i++)
        {
            a[0]=in.next();
            a[1]=in.next();
            a[2]=in.next();
            x[0]=in.next();
            x[1]=in.next();
            if(!a[0].equalsIgnoreCase(x[0]) && !a[0].equalsIgnoreCase(x[1]))
            result[i]=a[1];
            else
            result[i]=a[0];
        }
        for(int i=0;i<t;i++)
        System.out.println(result[i]);
    }
}