#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        long long x, y;
        cin >> x >> y;
        // x^4 + 4.y^2 = 4.x^2.y
        if (pow(x, 4) + 4 * pow(y, 2) == 4 * pow(x, 2) * y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}