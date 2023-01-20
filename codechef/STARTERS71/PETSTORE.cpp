#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n;
        cin >> n;
        map<int, int> M;
        int p;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            if (M.find(p) == M.end())
            {
                M[p] = 1;
            }
            else
                M[p]++;
        }
        bool ans = true;
        for (auto &i : M)
        {
            if (i.second % 2 != 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}