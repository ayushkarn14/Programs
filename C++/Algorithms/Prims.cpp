#include <bits/stdc++.h>
using namespace std;
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, vector<pair<pair<int, int>, int>> &g)
{
    // vector<pair<pair<node1, node2>, weight>>;

    // making adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    // initializations and making req. data structures
    vector<int> key(n + 1, INT_MAX);
    vector<bool> mst(n + 1, false);
    vector<int> parent(n + 1, -1);
    key[1] = 0;

    // iterating over the adj list (note the loop limits)
    for (int i = 1; i < n; i++)
    {
        // now finding the node with minimum key value which is not in tree(mst is false)
        int u;
        int mini = INT_MAX;
        for (int j = 1; j <= n; j++)
        {
            if (!mst[j] && key[j] < mini)
            {
                u = j;
                mini = key[j];
            }
        }
        mst[u] = true; // including the min node in tree(marking its mst as true)

        // now checking its adjacent nodes
        for (auto it : adj[u])
        {
            int v = it.first;
            int w = it.second;

            if (mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int, int>, int>> result;
    for (int i = 2; i <= n; i++)
        result.push_back(make_pair(make_pair(parent[i], i), key[i]));
    return result;
}
int main()
{
}
