#include <bits/stdc++.h>
using namespace std;
class Disjoint
{
    vector<int> parent, rank;

public:
    Disjoint(int n = 0)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }
    int findUParent(int node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = findUParent(parent[node]);
    }
    void unionrank(int u, int v)
    {
        int ult_p_u = findUParent(u);
        int ult_p_v = findUParent(v);

        if (u == v)
            return;
        if (rank[u] < rank[v])
            parent[ult_p_u] = ult_p_v;
        else if (rank[u] > rank[v])
            parent[ult_p_v] = ult_p_u;
        else
        {
            parent[ult_p_v] = ult_p_u;
            rank[ult_p_u]++;
        }
    }
};
vector<pair<int, pair<int, int>>> minSpanTree(int n, vector<pair<int, pair<int, int>>> adj)
{
    sort(adj.begin(), adj.end());
    Disjoint ds(n);
    vector<pair<int, pair<int, int>>> result;
    for (auto it : adj)
    {
        int w = it.first;
        int u = it.second.first;
        int v = it.second.second;
        if (ds.findUParent(u) != ds.findUParent(v))
        {
            result.push_back({w, {u, v}});
            ds.unionrank(u, v);
        }
    }
    return result;
}
int main()
{
    cout << "E: ";
    int e;
    cin >> e;
    cout << "V: ";
    int n;
    cin >> n;
    int u, v, w;
    vector<pair<int, pair<int, int>>> adj; // adjacency list
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        adj.push_back({w, {u, v}});
    }
    vector<pair<int, pair<int, int>>> ans = minSpanTree(n, adj);
    int weight = 0;
    cout << "Edges in the min spanning tree: \n";
    for (auto it : ans)
    {
        weight += it.first;
        cout << it.second.first << " " << it.second.second << " " << it.first << endl;
    }
    cout << "Sum of weights : " << weight;
}