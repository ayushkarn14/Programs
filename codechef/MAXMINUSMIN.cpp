#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(max(a, b), c) - min(min(a, b), c) << endl;
    }
}