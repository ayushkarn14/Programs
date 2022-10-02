class Circle extends TwoDshape {

    double r;

    Circle(int x) {
        super(x);
    }

    double area() {
        return (3.14 * super.Getr() * super.Getr());
    }
}