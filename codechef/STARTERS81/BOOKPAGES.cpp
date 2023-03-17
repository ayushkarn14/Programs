#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int e = 0, o = 0;
        int c;
        cin >> c;
        int temp = -1;
        for (int i = 0; i < c; i++)
        {
            cin >> temp;
            if (temp % 2 == 0)
                e++;
            else
                o++;
        }
        if (o % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}