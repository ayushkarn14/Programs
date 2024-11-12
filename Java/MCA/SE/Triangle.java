class Triangle {

    static void checkTriangle(int x, int y, int z) {

        if ((x <= 0 || y <= 0 || z <= 0) || (x + y <= z || x + z <= y || y + z <= x))
            System.out.println("Invalid Triangle");
        else if (x == y && y == z)
            System.out.println("Equilateral Triangle");
        else if (x == y || y == z || z == x)
            System.out.println("Isosceles Triangle");
        else
            System.out.println("Scalene Triangle");
    }

    public static void main(String[] args) {
        int x = 2, y = 7, z = 9;
        checkTriangle(x, y, z);
    }
}