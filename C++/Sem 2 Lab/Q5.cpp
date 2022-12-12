#include <iostream>
using namespace std;
class Q5
{
public:
    void fib(int, int, int);
};

void Q5::fib(int a, int b, int n)
{
    if (n > 0)
    {
        int c = a + b;
        cout << c << " ";
        fib(b, c, n - 1);
    }
}
int main()
{
    cout << "Enter number of terms : ";
    int n;
    cin >> n;
    Q5 ob;
    cout << "Fibbonacci series: " << endl;
    cout << "0 "
         << "1 ";
    ob.fib(0, 1, n - 2);
}