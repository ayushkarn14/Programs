public class UnderAge extends Exception{
    int a;
    UnderAge(int x){
        a=x;
    }
    public String toString(){
        return ("Under Age!"+a);
    }
}
