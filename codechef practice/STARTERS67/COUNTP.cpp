#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    for (long loop_var = 0; loop_var < t; loop_var++)
    {
        long l, c = 0;
        cin >> l;
        for (long i = 0; i < l; i++)
        {
            long n;
            cin >> n;
            if (n % 2 == 1)
                c++;
        }
        if (c % 2 == 0 && c != 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}