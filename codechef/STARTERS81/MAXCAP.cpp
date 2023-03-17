#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int x, y;
        cin >> x >> y;
        if (x * y > 500 || x > 8)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}