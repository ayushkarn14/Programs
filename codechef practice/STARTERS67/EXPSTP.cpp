#include <bits/stdc++.h>
using namespace std;
int mini(int a, int b, int c, int d)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    return min;
}
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int in_cost = 0, out_cost = 0, n, x1, y1, x2, y2, ans;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        in_cost = abs(x2 - x1) + abs(y2 - y1);

        out_cost = mini(x1, n - x1 + 1, y1, n - y1 + 1) + mini(x2, n - x2 + 1, y2, n - y2 + 1);

        ans = (in_cost < out_cost) ? in_cost : out_cost;
        cout << ans << endl;
    }
}