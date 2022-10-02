import java.util.*;
class Name{
    String firstName,middleName,lastName;
    Name(){
        firstName="";
        middleName="";
        lastName="";
    }
}
public class Book {

    private String title;
    private int yearOfPublication;
    public static void main(String[] args) {
    Name obj=new Name();
    Book obj1=new Book();
    Book obj2=new Book();
    Scanner sc=new Scanner(System.in);
    System.out.println("first book - ");
    System.out.println("enter title - ");
    obj1.title=sc.nextLine();
    System.out.println("enter year - ");
    obj1.yearOfPublication=sc.nextInt();
    System.out.println("first name - ");
    obj.firstName=sc.nextLine();
    System.out.println("middle name - ");
    obj.middleName=sc.nextLine();
    System.out.println("last name - ");
    obj.lastName=sc.nextLine();
    System.out.println("second book - ");
    System.out.println("enter title - ");
    obj2.title=sc.nextLine();
    System.out.println("enter year - ");
    obj2.yearOfPublication=sc.nextInt();
    }
    public String toString(){
        return "title - "+title+"  Year of publication - "+yearOfPublication+" "+ firstName+" "+middleName+" "+lastName;
    }    
}
