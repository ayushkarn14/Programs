#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    for (long test_case = 0; test_case < t; test_case++)
    {
        long r, c;
        cin >> r >> c;
        r--;
        c--;
        if (c >= r) // upper triangle
        {
            if (c % 2 == 0) // even column
                cout << 8 * ((((c / 2) * ((c / 2) + 1))) / 2) + 1 - r;
            else // odd column
                cout << 8 * ((((c / 2) * ((c / 2) + 1))) / 2) + 2 + r;
        }
        else // lower triangle
        {
            if (r % 2 != 0) // odd row
                cout << 8 * ((((r / 2) * ((r / 2) + 1))) / 2) + 4 * (r / 2 + 1) - c;
            else // even row
                cout << 8 * (((((r - 1) / 2) * (((r - 1) / 2) + 1))) / 2) + 4 * ((r - 1) / 2 + 1) + 1 + c;
        }
        cout << endl;
    }
}