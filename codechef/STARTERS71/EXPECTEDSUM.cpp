#include <bits/stdc++.h>
using namespace std;
long long calculate(long long p,
                    long long q)
{
    long long mod = 998244353, expo;
    expo = mod - 2;

    // Loop to find the value
    // until the expo is not zero
    while (expo)
    {

        // Multiply p with q
        // if expo is odd
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;

        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}
int main()
{
    long long t;
    cin >> t;
    for (long long loop_var = 0; loop_var < t; loop_var++)
    {
        long long a, b;
        cin >> a >> b;
        long long chef_turns = 0;
        if ((a + b) % 2 == 0)
        {
            chef_turns = (a + b) / 2;
        }
        else
            chef_turns = ((a + b + 1) / 2);
        long long p1 = chef_turns * a;
        long long p2 = a + b;
        cout << calculate(p1, p2) << endl;
    }
}