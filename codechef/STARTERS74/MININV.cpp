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
        vector<vector<int>> v;
        int puts;
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> puts;
            v.push_back({puts});
        }
        // 4 2 3 1 3

        // 4 2 4
        // 2 3
        // 3
        // 1
        // 3
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i][0] == v[j][0] + 1)
                    v[i].push_back(j);
            }
        }
        int max = 0;
        int max_i = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < v[i].size())
            {
                max = v[i].size();
                max_i = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j : v[i])
                cout << j << " ";
            cout << endl;
        }
        int count = 0;
        int l = v[max_i][2];
        int r = v[max_i][v[max_i].size() - 1];
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 1; j < v[i].size() - 1; j++)
        //     {
        //         if (l >= v[i][j] && v[i][j] <= r)
        //             count++;
        //     }
        // }
        // cout << count << endl;
    }
}
