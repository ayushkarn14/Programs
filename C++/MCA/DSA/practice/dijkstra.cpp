#include <iostream>
using namespace std;

#define INF __INT_MAX__
bool visited[100] = {false};
int graph[100][100];
int dist[100];
int src, n, e;

void dijkstra()
{
    for (int i = 0; i < n - 1; i++)
    {
        // find the nearest unvisited node
        int u = -1;
        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && (u == -1 || dist[u] > dist[j]))
                u = j;
        }
        visited[u] = true;
        for (int v = 0; v < n; v++)
        {
            if (graph[u][v] != INF && !visited[v] && (dist[v] > dist[u] + graph[u][v]))
                dist[v] = dist[u] + graph[u][v];
        }
    }
    cout << "Minimum distance from source to each vertex : " << endl;
    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
    cout << endl;
}
int main()
{
    cout << "Enter number of vertices : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = (i == j ? 0 : INF);
        }
        dist[i] = INF;
    }
    cout << "Enter number of edges : ";
    cin >> e;
    cout << "Enter " << e << " edges (u,v,w) :" << endl;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
        graph[v][u] = w;
    }
    cout << "Enter source : ";
    cin >> src;
    dist[src] = 0;
    dijkstra();
}