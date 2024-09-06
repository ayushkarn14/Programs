#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int V, vector<pair<int, int>> adj[], int S)
{
    priority_queue<pair<int, int>> pq;
    vector<int> dist(V, INT_MAX);

    dist[S] = 0;
    pq.push({0, S}); // distance, node

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto i : adj[node])
        {
            int adjNode = i.first;
            int edgeWeight = i.second;

            if (dis + edgeWeight < dist[adjNode])
            {
                dist[adjNode] = dis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}
int main()
{
}