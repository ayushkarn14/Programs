class ob {
    int n;

    public ob(int x) {
        n = x;
    }

    void prime() {
        int p = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                p++;
        }
        if (p == 2)
            System.out.println("Prime");
        else
            System.out.println("not prime");
    }
}
