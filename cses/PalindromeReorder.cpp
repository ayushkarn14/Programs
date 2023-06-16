#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1, s2, s3;
    bool possible = true;
    map<char, long long> m;
    for (char i : s)
        m[i]++;
    long long c = 0;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
            c++;
        if (c > 1)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        string s1, s2, s3;
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                string t(i.second / 2, i.first);
                s1 += t;
                s3 = t + s3;
            }
            else
            {
                string t(i.second, i.first);
                s2 += t;
            }
        }
        string ans = s1 + s2 + s3;
        cout << ans << endl;
    }
    else
        cout << "NO SOLUTION" << endl;
    if (!possible)
        cout << "NO SOLUTION" << endl;
    else
        cout << s2 + s1;
}