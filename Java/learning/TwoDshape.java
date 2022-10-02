class TwoDshape {
    private double radius;

    TwoDshape(double r) {
        radius = r;
    }
    double Getr() {
        return radius;
    }
    void Setr(double r) {
        radius = r;

    }
    void show() {
        System.out.println("radius : " + radius);
    }
}