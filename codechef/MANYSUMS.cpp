#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int l, r;
        cin >> l >> r;
        cout << 2 * (r - l) + 1 << endl;
    }
}