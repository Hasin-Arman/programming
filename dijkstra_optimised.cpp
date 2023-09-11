#include <bits/stdc++.h>
using namespace std;
const int n = 1e5;
const long long INF = 1e18;
int visited[n];
long long d[n];
int parent[n];
int nodes, edge;
vector<pair<long long, int>> adj_list[n];

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;
    priority_queue<pair<long long,int>> pq;
    pq.push({0,src});
    while(!pq.empty())
    {
        pair<long long,int> head;
        head=pq.top();
        pq.pop();
        int selected=head.second;
        visited[selected] = 1;
        for (auto node : adj_list[selected])
        {
            int adj_node = node.first;
            int cost = node.second;

            if (d[selected] + cost < d[adj_node])
            {
                d[adj_node] = d[selected] + cost;
                parent[adj_node] = selected;
                pq.push({d[adj_node],adj_node});
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
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    int src = 1;
    dijkstra(src);

    if(visited[nodes]==0){
        cout<<"-1"<<endl;
        return 0;
    } 
    int current_node=nodes;
    vector<int> path;
    while (true)
    {
        path.push_back(current_node);
        if(current_node==src){
            break;
        }
        current_node=parent[current_node];
    }
    reverse(path.begin(), path.end());
    for(auto it:path){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}