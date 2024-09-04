import java.util.*;
class Ayush{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		String s[]=new String[2];
		System.out.println("Enter two numbers");
		s[0]=in.next();
		s[1]=in.next();
		System.out.println(s[0]+s[1]);
		System.out.println("After converting to Integer");
		int n[]=new int[2];
		n[0]=Integer.parseInt(s[0]);
		n[1]=Integer.parseInt(s[1]);
		System.out.println(n[0]+n[1]);
	}
}
