#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n;
        cin >> n; // days
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int str_a = 0, str_b = 0, max_a = -1, max_b = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                str_a++;
            else
                str_a = 0;
            if (b[i] != 0)
                str_b++;
            else
                str_b = 0;
            if (str_a > max_a)
                max_a = str_a;
            if (str_b > max_b)
                max_b = str_b;
        }
        if (max_a > max_b)
            cout << "OM" << endl;
        else if (max_b > max_a)
            cout << "ADDY" << endl;
        else
            cout << "DRAW" << endl;
    }
}
