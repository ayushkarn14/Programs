import java.util.*;
class genes
{
public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int t=in.nextInt();
    String op[]= new String[t];
    for(int i=0;i<t;i++)
    {op[i]="";
        int a=in.nextInt();
        if(a%2!=0)
            op[i]="-1";
        else
        {
            for(int j=0;j<(a/2);j++)
                op[i]+="01";
        }
    }
    for(int i=0;i<t;i++)
    System.out.println(op[i]);
}
}