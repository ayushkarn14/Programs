public class Demo{
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer(30);
        str.replace(0,5,"Ayush");
        System.out.println(str);
        System.out.println(str.capacity());
        System.out.println(str.length());
    }
} 