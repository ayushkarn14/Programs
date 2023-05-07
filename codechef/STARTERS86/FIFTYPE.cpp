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
        if (n > 50)
        {
            int diff = n - 50;
            if (diff % 3 == 0)
                cout << diff / 3 << endl;
            else if (diff % 3 == 1)
                cout << diff / 3 + 2 << endl;
            else
                cout << diff / 3 + 4 << endl;
        }
        else if (n < 50)
        {
            int diff = 50 - n;
            if (diff % 2 == 0)
                cout << diff / 2 << endl;
            else
                cout << diff / 2 + 3 << endl;
        }
        else
            cout << 0 << endl;
    }
}