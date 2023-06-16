// not done
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int a, b;
        cin >> a >> b;
        int y = (2 * a - b) / 3;
        int x = a - 2 * y;
        if (x + 2 * y == a && 2 * x + y == b && x >= 0 && y >= 0)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}