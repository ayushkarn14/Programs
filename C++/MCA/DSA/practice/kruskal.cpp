#include <iostream>
using namespace std;

int n, e;
int parent[100];
int ranks[100];
struct Edge
{
    int u, v, w;
};

void insertionSort(struct Edge edges[], int e)
{
    for (int i = 1; i < e; i++)
    {
        Edge key = edges[i];
        int j = i - 1;
        while (j >= 0 && edges[j].w > key.w)
        {
            edges[j + 1] = edges[j];
            j--;
        }
        edges[j + 1] = key;
    }
}
int findParent(int u)
{
    if (u != parent[u])
    {
        parent[u] = findParent(parent[u]);
    }
    return parent[u];
}
void setUnion(int u, int v)
{
    int parent_u = findParent(u);
    int parent_v = findParent(v);
    if (parent_u != parent_v)
    {
        if (ranks[parent_u] < ranks[parent_v])
            parent[parent_u] = parent_v;
        else if (ranks[parent_v] < ranks[parent_u])
            parent[parent_v] = parent_u;
        else
        {
            parent[parent_v] = parent_u;
            ranks[parent_u]++;
        }
    }
}
void kruskal(Edge edges[], int e)
{
    // sort with increasing edge weights
    insertionSort(edges, e);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    int mstWeight = 0;
    int mstEdgeNo = 0;
    for (int i = 0; i < e && mstEdgeNo < n - 1; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;
        if (findParent(u) != findParent(v))
        {
            setUnion(u, v);
            cout << u << " " << v << " " << edges[i].w;
            mstWeight += edges[i].w;
            mstEdgeNo++;
        }
    }
    cout << "Total Weight of MST: " << mstWeight << endl;
}
int main()
{
    cout << "Enter number of vertices : ";
    cin >> n;
    cout << "Enter number of edges : ";
    cin >> e;

    Edge edges[e];
    cout << "Enter " << e << " edges (u,v,w)" << endl;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    kruskal(edges, e);
}