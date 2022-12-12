#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    for (long loop_var = 0; loop_var < t; loop_var++)
    {
        long n, k;
        cin >> n >> k;
        if (n == 1)
            cout << 0 << endl;
        else if (k < n / 2)
            cout << ((k * n) - (k * (k + 1)) / 2) + ((n - 2 * k) * k) + ((k * (k - 1)) / 2) << endl;
        else
            cout << (n * (n - 1)) / 2 << endl;
    }
}