#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int a, b;
        cin >> a >> b;
        cout << min((a - __gcd(b, a)), (((a * b) / __gcd(a, b)) - b)) << endl;
    }
}