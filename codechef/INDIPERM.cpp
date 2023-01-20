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
        for (int i = 2; i <= n; i++)
            cout << i << " ";
        cout << 1 << endl;
    }
}