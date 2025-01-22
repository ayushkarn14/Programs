#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;
        // int a[n];
        // int b[n];
        // for (int i = 0; i < n; i++)
        //     cin >> a[i];
        // for (int i = 0; i < n; i++)
        //     cin >> b[i];
        string a;
        cin >> a;
        string b;
        cin >> b;

        bool odd = false;
        bool has_spare_1 = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '1')
                odd = !odd;
            if (a[i] != b[i])
                has_spare_1 = true;
        }
        if (odd || (!odd && has_spare_1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}