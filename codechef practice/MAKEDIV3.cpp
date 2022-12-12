#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 3;
        else
        {
            for (int i = 0; i < n - 2; i++)
                cout << 3;
            if (n % 3 == 0)
                cout << "03";
            else
                cout << 33;
        }
        cout << endl;
    }
}