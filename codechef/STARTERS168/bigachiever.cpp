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
        int maxi = -1;
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t > maxi)
            {
                maxi = t;
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}