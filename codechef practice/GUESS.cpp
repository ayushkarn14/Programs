#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    for (long loop_var = 0; loop_var < t; loop_var++)
    {
        long m, n;
        cin >> m >> n;
        if (m == 1 && n == 1)
            cout << "0/1" << endl;
        else if (m % 2 == 0 || n % 2 == 0)
            cout << "1/2" << endl;
        else
            cout << (m * n + 1) / 2 - 1 << "/" << m * n << endl;
    }
}