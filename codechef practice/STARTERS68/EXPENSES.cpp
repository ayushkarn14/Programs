#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, x;
        cin >> n >> x;
        int t = pow(2, x);
        while (n != 0)
        {
            t /= 2;
            n--;
        }
        cout << t << endl;
    }
}