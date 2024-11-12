#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // cout << endl;
    // cout << s << endl;
    // int ans;
    // ans = s[0] - 48;
    // for (int i = 1; i < (n / 2); i++)
    // {
    //     ans = ans | ((s[i] - 48) & (s[i + 1] - 48));
    // }
    // if (n % 2 == 0)
    // {
    //     ans = ans | (s[n - 1] - 48);
    // }
    // if (ans == 0)
    //     cout << "NO\n";
    // else
    //     cout << "YES\n";
    if (s[0] == '1' || s[n - 1] == '1')
        cout << "YES\n";
    else
        cout << "NO\n";
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