import java.util.Scanner;
public class exceptionDemo{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter age: ");
        int age=in.nextInt();
        try{
            if(age<18)
                throw new UnderAge(age);
            System.out.println("Adult");
        }
        catch(UnderAge e){
            System.out.println(e);
        }
    }
}
