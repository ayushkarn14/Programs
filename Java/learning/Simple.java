class Box {
    int a, b, c;

    Box(Box ob) {
        a = ob.a;
        b = ob.b;
        c = ob.c;

    }

    Box(int w, int x, int y) {
        a = w;
        b = x;
        c = y;

    }

    Box() {
        a = -1;
        b = -1;
        c = -1;
    }

    int volume() {
        return a * b * c;

    }
}

class Bed extends Box {
    int d;

    Bed(Bed ob) {
        super(ob);
        d = ob.d;

    }

    Bed(int w, int x, int y, int z) {
        super(w, x, y);
        d = z;
    }

    Bed() {
        super();
        d = -1;

    }

}

class Simple {
    public static void main(String args[]) {
        int result;

        Bed obj2 = new Bed(34, 56, 65, 78);
        Bed ob = new Bed(obj2);
        Bed obj = new Bed(23, 24, 56, 67);
        Bed obj1 = new Bed();
        result = obj.volume();
        System.out.println(result);
        System.out.println(obj2.d);

    }
}