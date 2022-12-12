#include <iostream>
using namespace std;
class Q5
{
public:
    int a;
    Q5(int x)
    {
        a = x;
    }

public:
    void fib(int);
};
void Q5::fib(int i)
{
    static int n1 = 0, n2 = 1, n3;
    if (i > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fib(i - 1);
    }
}
int main()
{
    cout << "Enter number of terms : ";
    int n;
    cin >> n;
    Q5 ob(n);
    cout << "Fibbonacci series: " << endl;
    cout << "0 "
         << "1 ";
    ob.fib(n - 2);
}