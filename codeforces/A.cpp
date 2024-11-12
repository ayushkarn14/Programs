#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int inp;
    int mini = INT_MAX, maxi = -INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        if (mini > inp)
            mini = inp;
        if (maxi < inp)
            maxi = inp;
    }
    cout << (n - 1) * (maxi - mini) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}