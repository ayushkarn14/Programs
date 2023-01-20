#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, k, s;
        cin >> n >> k >> s;
        int pows[n + 1];
        int sums[n];
        for (int i = 0; i < n; i++)
            pows[i] = pow(k, i);
        sums[0] = 1;
        for (int i = 1; i < n; i++)
            sums[i] = sums[i] + sums[i - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (sums[i] <= s)
            {
                if (sums[i - 1] < pows[i])
                {
                }
            }
            else
            {
                cout << -2 << endl;
                break;
            }
        }
    }
}