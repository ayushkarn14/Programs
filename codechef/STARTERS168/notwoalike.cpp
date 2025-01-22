#include <bits/stdc++.h>
using namespace std;
int getDistinct(vector<int> v, int f, int l)
{
    set<int> s;
    for (int i = f; i <= l; i++)
        s.insert(v[i]);
    return s.size();
}
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;
        map<int, pair<int, int>> m;
        int t;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            t = v[i];
            if (m.find(t) == m.end())
            {
                m[t] = {i, i};
            }
            else
            {
                m[t].second = i;
            }
        }
        int f = m.begin()->second.first;
        int l = m.begin()->second.second;
        // int f = -1, l = -1;
        int g_f, g_l;
        int ans = 0;
        for (auto i : m)
        {
            g_f = f;
            g_l = l;
            int f = i.second.first;
            int l = i.second.second;
            if (f > g_l)
            {
                if (g_f != g_l)
                    ans += getDistinct(v, g_f, g_l);
            }
            else
            {
                g_l = l;
            }
        }
        if (getDistinct(v, 0, n - 1) == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
}
// har element ka 1st and last copy ka index rakho and max range wala
// element ka copies ke beech kitna distinct hai = ans

// 1 1 2 3 4 5 3 4
// 4
// 1 -> 0,1 ---
// 2 -> 2,2 --- 1
// 3 -> 3,6 --- 0
// 4 -> 4,7 ---
// 5 -> 5,5 --- 7-3