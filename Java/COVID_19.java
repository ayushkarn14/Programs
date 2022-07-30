import java.util.*;
class COVID_19
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        int t=in.nextInt();
        int op[]=new int[t];
        for(int i=0;i<t;i++){
            float n=in.nextFloat();
            float m=in.nextFloat();
            op[i]=(int)((Math.ceil(m/2.0))*(Math.ceil(n/2.0)));
    }
    for(int i=0;i<t;i++)
        System.out.println(op[i]);
    }

}