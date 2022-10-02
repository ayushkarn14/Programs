interface inter
{
    default public void display(){
        System.out.println("Inter");
    }
}
interface inter2
{
    default public void display(){
        System.out.println("Inter 2");
    }
}
public class InterfaceDemo implements inter,inter2{
    void inter.super.display(){

    }
    inter2.super.dispaly();
}
