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
        vector<string> v{"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
        int ans = INT_MAX;

        for (const string &pattern : v)
        {
            int changes = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != pattern[i % 3])
                {
                    changes++;
                }
            }
            ans = min(ans, changes);
        }

        cout << ans << "\n";
    }
    return 0;
}