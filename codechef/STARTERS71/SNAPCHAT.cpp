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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int streak = 0, max = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
                streak++;
            else
                streak = 0;
            if (streak > max)
                max = streak;
        }
        cout << max << endl;
    }
}
