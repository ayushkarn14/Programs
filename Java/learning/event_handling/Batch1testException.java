public class Batch1testException {
    char ch;

    public void isCap(String s) {
        ch = s.charAt(0);
        try {
            if (ch >= 'a' && ch <= 'z') {
                throw new MyException();
            }
            System.out.println("First Letter of student name is capital");
        } catch (MyException e) {
            System.out.println(e);
        }
    }

    public static void main(String args[]) {
        Batch1testException ob = new Batch1testException();

        ob.isCap(args[0]);
    }
}
