import java.util.*;
class listlist
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int op[]=new int[t];
        for(int i=0;i<t;i++)
        {
            int n=in.nextInt();
            int a[]=new int[n];
            for(int j=0;j<n;j++)
                a[j]=in.nextInt();
            
            int fr[]=new int[n];

            for (int j=0;j<n;j++)
            {
                //update index with count
                int value = a[j];
                fr[value] = fr[value] + 1;
            }
            int max=0;
            for(int j=0;j<n;j++)
            {
                if(fr[j]>max)
                max=fr[j];
            }
            if(n==1)
                op[i]=0;
            else if(max==1)
                op[i]=-1;
            else
                op[i]=n-max+1;
        }
        for(int i=0;i<t;i++)
            System.out.println(op[i]);
    }
}