#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int zz = 0; zz < t; zz++)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0 || even == 0)
            cout << 0 << endl;
        else
            cout << even << endl;
    }
    return 0;
}
