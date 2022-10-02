#include <bits/stdc++.h>
using namespace std;
int logging(int a, int b)
{
    return log2(a) / log2(b);
}
int primeFactors(int n)
{
    int pro = 1;
    int c = 2;
    while (n > 1)
    {
        if (n % c == 0)
        {
            pro = pro * c;
            n /= c;
            while (n % c != 0)
            {
                n /= c;
            }
        }
        else
            c++;
    }
    return pro;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << "YES" << endl;
        else
        {
            int pa = primeFactors(a);
            int pb = primeFactors(b);
            cout << pa << " " << pb << endl;
            if (pa == pb)
                cout << "YES";
            else if ((logging(a, pa) == (int)(logging(a, pa))) && (logging(b, pb) == (int)(logging(b, pb))))
                cout << "YES" << endl;
            else
                cout << "NO";
        }
    }
    return 0;
}
