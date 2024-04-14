#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void dfs(int *fl, int *arr, vector<vector<int>> &gr, int *dp, int i)
{
    int z = 0, o = 0, t = 0, oo = 0;
    arr[i] = 1;
    for (int j = 0; j < gr[i].size(); ++j)
    {
        int d = gr[i][j];
        if (arr[d] == 0)
        {
            dfs(fl, arr, gr, dp, d);
            dp[i] = dp[i] + dp[d];
            if (fl[d] == 0 && dp[d] > 0)
                z++;
            else if (fl[d] == 1 && dp[d] > 0)
                o++;
            else if (fl[d] == 2 && dp[d] > 0)
                t++;
            else if (dp[d] == 0)
                oo++;
        }
    }
    if (dp[i] == 0 && gr[i].size() > 1)
    {
        dp[i] = 1;
        return;
    }
    if (z > 0)
    {
        dp[i] -= z / 2;
        if (z % 2 == 0)
            fl[i] = 1;
    }
    else if (t > 0 || oo > 0)
    {
        dp[i]++;
        fl[i] = 0;
    }
    else if (o > 0)
        fl[i] = 2;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 2)
        {

            cout << 1 << endl;
            continue;
        }
        else if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<vector<int>> gr(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            gr[v].pb(u);
            gr[u].pb(v);
        }
        int fl[n + 1] = {0};
        int v[n + 1] = {0};
        int dp[n + 1] = {0};
        dfs(fl, v, gr, dp, 0);
        cout << dp[0] << "\n";
    }
}