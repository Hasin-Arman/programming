#include <bits/stdc++.h>
using namespace std;
const int n = 1e5;
const int INF = 1e9;
int visited[n];
int d[n];
int nodes, edge;
vector<pair<int, int>> adj_list[n];

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;
    for (int i = 0; i < nodes; i++)
    {
        int selected = -1;
        for (int j = 1; j <= nodes; j++)
        {
            if (visited[j] == 1)
            {
                continue;
            }

            if (selected == -1 || d[selected] > d[j])
            {
                selected = j;
            }
        }
        visited[selected] = 1;
        for (auto node : adj_list[selected])
        {
            int adj_node = node.first;
            int cost = node.second;

            if (d[selected] + cost < d[adj_node])
            {
                d[adj_node] = d[selected] + cost;
            }
        }
    }
}
int main()
{
    int src;
    cin >> nodes >>src>> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    dijkstra(src);
    if(d[nodes]==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<d[nodes]<<"\n";    
    }
    
    return 0;
}