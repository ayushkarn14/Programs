import java.util.Scanner;
class Person{
  private String name;
  void input(){
    Scanner in = new Scanner(System.in);
    System.out.println("Enter name: ");
    name=in.nextLine();
  }
  void disp(){
    System.out.println("Name : "+name);
  }
}
class Student extends Person{
  int marks;
    void input(){
      Scanner in = new Scanner(System.in);
      System.out.println("Enter marks");
      marks=in.nextInt();
    }
    void disp(){
      System.out.println("Marks :"+marks);
    }
}
class Employee extends Person{
  int salary;
    void input(){
      Scanner in = new Scanner(System.in);
      System.out.println("Enter salary");
      salary=in.nextInt();
    }
    void disp(){
      System.out.println("Salary: "+salary);
    }
}
public class Main{
  public static void main(String args[]){
    Person p1 = new Person();
    Person p2 = new Person();
    Student s =new Student();
    Employee e =new Employee();
    
    //Student info
    System.out.println("Student's details: ");
    p1.input();
    s.input();
    // employeen info
    System.out.println("Employee's details: ");
    p2.input();
    e.input();

    System.out.println("Student's details: ");
    Person pp = s;
    p1.disp();
    pp.disp();

    System.out.println("Student's details: ");
    pp = e;
    p2.disp();
    pp.disp();
  }
}