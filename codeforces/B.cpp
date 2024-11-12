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
        if (n >= 1)
        {
            cout << 1;
            n--;
        }
        for (int i = 0; i < n; i++)
            cout << 0;
        cout << endl;
    }
}