#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int nn;
        cin >> nn;
        map<int, int> m;
        int n;
        std::map<int, int>::iterator itr;
        for (int i = 0; i < nn; i++)
        {
            cin >> n;
            if (m.find(n) == m.end())
            {
                m.insert(pair<int, int>(n, 1));
            }
            else
            {
                itr = m.find(n);
                itr->second = itr->second + 1;
            }
        }
        int ans = 0;
        for (itr = m.begin(); itr != m.end(); ++itr)
        {
            // cout << "Key => " << itr->first << ", Value => " << itr->second << endl;
            ans += itr->second - 1;
        }
        cout << ans << endl;
    }
}