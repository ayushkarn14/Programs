#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << gcd(a, b);
        else
            cout << gcd(b, a);
        cout << "\n";
    }
}