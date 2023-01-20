#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n;
        int min = INT_MAX;
        cin >> n;
        int puts;
        for (int i = 0; i < n; i++)
        {
            cin >> puts;
            if (puts < 0)
            {
                puts = -puts;
            }
            if (puts < min)
            {
                min = puts;
            }
        }
        if (min <= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min - 1 << endl;
        }
    }
}