#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n, m;
        cin >> n >> m;
        if (n > (6 * 6 * m))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}