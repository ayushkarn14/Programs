#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void printPath(vector<int> parent, int source, int dest)
    {
        stack<int> st;
        int final = dest;
        while (parent[dest] != source)
        {
            dest = parent[dest];
            st.push(dest);
        }
        cout << source << "->";
        while (!st.empty())
        {
            cout << st.top() << "->";
            st.pop();
        }
        cout << final << endl;
    }
    void shortestPath(int V, vector<pair<int, int>> G[], int source, int dest)
    {
        vector<int> dist(V, INT_MAX);
        dist[source] = 0;
        queue<int> q;
        q.push(source);
        vector<int> parent(V, -1);
        parent[source] = source;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto node : G[u])
            {
                int v = node.first;
                int wt = node.second;
                if (dist[v] > dist[u] + wt)
                {
                    dist[v] = dist[u] + wt;
                    q.push(v);
                    parent[v] = u;
                }
            }
        }
        cout << "Cost to reach destination: " << dist[dest] << "\n";
        printPath(parent, source, dest);
    }
};
int main()
{
    int V, E, source, dest;
    cout << "Enter number of Vertex : ";
    cin >> V;
    cout << "Enter number of Edges : ";
    cin >> E;
    int u, v, wt;
    cout << "Enter values:\n <edge1> <edge2> <cost>\n";
    vector<pair<int, int>> adj[V];
    while (E--)
    {
        cin >> u >> v >> wt;
        adj[u].push_back(make_pair(v, wt));
    }
    cout << "Enter Source : ";
    cin >> source;
    cout << "Enter Destination :";
    cin >> dest;
    solution *obj = new solution;
    obj->shortestPath(V, adj, source, dest);
    return 0;
}