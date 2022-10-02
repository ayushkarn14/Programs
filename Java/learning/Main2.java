import java.util.*;
class Person {
    private String name;
    void input(){
        Scanner in =new Scanner(System.in);
        System.out.println("Enter name:");
        name = in.nextLine();
    }
    void disp(){
        System.out.println("Name = "+name);
    }
    // String giveName(){
    //     return name;
    // }
}
class Student extends Person{
    int marks;
    void input(){
        Scanner in =new Scanner(System.in);
        System.out.println("Enter marks:");
        marks=in.nextInt();
    }
    void disp(){
        Person ob1 = new Person();
        // System.out.println("Name = "+ob1.giveName());
        System.out.println("Marks = "+marks);
    }
}
class Employee extends Person{
    int salary;
    void input(){
        Scanner in =new Scanner(System.in);
        System.out.println("Enter salary");
        salary=in.nextInt();
    }
    void disp(){
        Person ob2 = new Person();
        // System.out.println("Name = "+ob2.giveName());
        System.out.println("Salary ="+salary);
    }
}
public class Main2{
    public static void main(String[] args) {
        Person ob = new Person();
        Student st = new Student();
        Employee em = new Employee();
        Person ref;
        ref=ob;
        ref.input();
        ref=st;
        ref.input();
        ref=em;
        ref.input();
        ref=ob;
        ref.disp();
        ref=st;
        ref.disp();
        ref=em;
        ref.disp();
    }
}