import java.util.Scanner;
public class Stack{
    int arr[];
    static int p,cc,l;
    Stack(int x){
        p=-1;
        l=x;
        arr=new int[x];
    }
    public static void testOver()throws OverFlow{
        if(p==l-1)
            throw new OverFlow();
    }
    public static void testUnder()throws UnderFlow{
        if(p==0)
            throw new UnderFlow();
    }
    public void push(){
        try{
            Stack.testOver();
            arr[++p]=cc;
            System.out.println(cc+" pushed");
        }
        catch(OverFlow e){
            System.out.println(e);
        }
    }
    public void pop(){
        try{
            Stack.testUnder();
            System.out.println(arr[p--]+" popped");
        }
        catch(UnderFlow e){
            System.out.println(e);
        }
    }
    void disp(){
        for(int i=0;i<=p;i++)
            System.out.println(arr[i]);
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter length of array");
        int size=in.nextInt();
        Stack ob=new Stack(size);
        int s=1;
        while(s!=0){
        System.out.println("1. Push, 2.Pop,3.disp 0 end prog");
        s=in.nextInt();
        switch(s){
            case 1:
                System.out.print("Element to be pushed: ");
                cc=in.nextInt();
                ob.push();
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.disp();
                break;
            default:
                System.out.println("Surprise mothafaka");
            }
        }
    }
}
