#include <bits/stdc++.h>
using namespace std;
const int n = 1e5;
const long long INF = 1e18;
int visited[n];
long long d[n];
int parent[n];
long long nodes, edge;
vector<pair<long long, int>> adj_list[n];

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;
    priority_queue<pair<long long, int>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<long long, int> head;
        head = pq.top();
        pq.pop();
        int selected = head.second;
        visited[selected] = 1;
        for (auto node : adj_list[selected])
        {
            int adj_node = node.first;
            int cost = node.second;

            if (d[selected] + cost < d[adj_node])
            {
                d[adj_node] = d[selected] + cost;
                parent[adj_node] = selected;
                pq.push({d[adj_node], adj_node});
            }
        }
    }
}
int main()
{
    cin >> nodes >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }
    int src = 1;
    dijkstra(src);
    for (int i = 1; i <= nodes; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}