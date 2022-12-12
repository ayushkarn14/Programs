#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int l, n;
        string s;
        cin >> l >> s;
        char curr;
        map<pair<char, int>, int> m;
        for (int i = 0; i < l; i++)
        {
            if (i == 0)
            {
                curr = s.at(i);
                n = 1;
                m[{curr, n}]++;
            }
            else
            {
                if (curr != s.at(i))
                {
                    n = 1;
                    curr = s.at(i);
                }
                else
                {
                    n++;
                }
                m[{curr, n}]++;
            }
        }
        int maxi = 0;
        for (auto &i : m)
        {
            if (i.second == 1)
            {
                maxi = max(maxi, i.first.second - 1);
                continue;
            }
            maxi = max(maxi, i.first.second);
        }
        cout << maxi << endl;
    }
}