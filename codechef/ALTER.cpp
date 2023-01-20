#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (p % a != 0 || q % b != 0)
            cout << "No" << endl;
        else
        {
            if (((q / b) == (p / a)) || ((q / b) == (p / a - 1)) || ((q / b) == (p / a + 1)))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}