// WRONG
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int curr = int(s[0]) - 48;
        int valid_points = 0;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (int(s[i]) - 48 == curr)
                f++;
            else
            {
                curr = int(s[i]) - 48;
                if (f >= 2)
                    valid_points++;
                f = 1;
            }
        }
        cout << "Points: " << valid_points << endl;
        if (valid_points % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
}