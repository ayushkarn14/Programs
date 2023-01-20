#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, curr;
        map<int, int> m;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            if (m.find(curr) == m.end())
                m[curr] = 1;
            else
                m[curr]++;
        }
        int max = -1;
        bool onlytwo = false;
        for (auto &i : m)
        {
            if (n == 2 && i.second != 2)
            {
                cout << "0" << endl;
                onlytwo = true;
                break;
            }
            if (i.second > max)
                max = i.second;
        }
        if (!onlytwo)
            cout << n - max << endl;
    }
}