public class Complex {
    float real, img;

    Complex() {
        real = 0;
        img = 0;
    }

    void add(float a, float b, float c, float d) {
        real = a + c;
        img = b + d;
    }

    void multiply(float a, float b, float c, float d) {
        real = a * c - b * d;
        img = a * d + b * c;
    }

    void tostring() {
        System.out.println("Number = " + real + " + i" + img);
    }

}
