public class Comargs {
    public static void main(String args[]) {
        int l, i, arl;
        char ch;
        l = args.length;
        System.out.println("Number of Arguements - " + l);
        for (i = 0; i < l; i++) {
            arl = args[i].length();
            ch = args[i].charAt(arl - 1);
            System.out.print(ch);
        }
    }

}
