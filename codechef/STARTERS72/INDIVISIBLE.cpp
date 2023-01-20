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
        for (int i = 1; i <= 100; i++)
        {
            if (a % i != 0 && b % i != 0 && c % i != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}