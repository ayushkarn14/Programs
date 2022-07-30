public class UnderAge extends Exception {
    int age;

    public UnderAge(int x) {
        this.age = x;
    }

    public String display() {
        return ("Underage!! Age = " + age);
    }
}