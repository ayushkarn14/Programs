#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int inp, cost = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            if (x - inp > c)
            {
                cost += c;
                sum += x;
            }
            else
            {
                sum += inp;
            }
        }
        cout << sum - cost << endl;
    }
}