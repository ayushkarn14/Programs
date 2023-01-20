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
        int count = 0;
        int puts;
        for (int i = 0; i < n; i++)
        {
            cin >> puts;
            if (puts == 1)
                count++;
        }
        if (n % 2 == 0 && count % 2 == 0)
            cout << "YES" << endl;
        else if (n % 2 == 1 && count % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}