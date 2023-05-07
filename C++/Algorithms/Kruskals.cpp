#include <bits/stdc++.h>
#include "DisjointSet.cpp"
using namespace std;
int spanningTree(int n, vector<vector<int>> edges[])
{
    // code here
    // making adjacency list
    vector<pair<int, pair<int, int>>> adj;
    //          w          u    v
    for (int i = 0; i < n; i++)
    {
        for (auto it : edges[i])
        {
            int v = it[0];
            int w = it[1];
            int u = i;
            adj.push_back({w, {u, v}});
        }
    }
    Disjoint ds(n);
    sort(adj.begin(), adj.end());
    int mstWt = 0;
    for (auto it : adj)
    {
        int w = it.first;
        int u = it.second.first;
        int v = it.second.second;

        if (ds.findUParent(u) != ds.findUParent(v))
        {
            mstWt += w;
            ds.UnionByRank(u, v);
        }
    }
    return mstWt;
    // the parent vector in Disjoint class will contain the parent of each nodes, if needed, print it;
}
int main()
{
}