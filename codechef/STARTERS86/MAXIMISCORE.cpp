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
        int a[n];
        int mod[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        mod[0] = abs(a[0] - a[1]);
        mod[n - 1] = abs(a[n - 1] - a[n - 2]);

        int min_ind = 0;
        for (int i = 1; i < n - 1; i++)
        {
            mod[i] = max(abs(a[i - 1] - a[i]), abs(a[i + 1] - a[i]));
        }
        int ans = mod[0];
        for (int i = 0; i < n; i++)
        {
            if (ans > mod[i])
                ans = mod[i];
        }
        cout << ans << endl;
    }
}