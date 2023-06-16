#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long total_pos = (pow(i, 2) * (pow(i, 2) - 1)) / 2;
        long long attack_pos = 4 * (i - 1) * (i - 2);
        long long ans = total_pos - attack_pos;
        cout << ans << endl;
    }
}