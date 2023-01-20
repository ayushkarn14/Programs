#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int a, c;
        cin >> a >> c;
        if (float(a + c) / 2.0 == (a + c) / 2)
            cout << (a + c) / 2 << endl;
        else
            cout << -1 << endl;
    }
}