#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
vector<int> adj_list[n];
int level[n];
int parent[n];
void bfs(int src)
{
    queue<int> q;
    level[src] = 1;
    visited[src] = 1;
    parent[src] =-1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                level[adj_node] = level[head] + 1;
                parent[adj_node] = head;
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 1;
    bfs(src);

    if (visited[node] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    else{
        cout <<level[node] << endl;
    }
    vector<int> path;
    int selected = node;

    while (true)
    {
        path.push_back(selected);
        if (selected == src)
        {
            break;
        }
        selected = parent[selected];
    }
    reverse(path.begin(), path.end());
    for(int nodes:path){
        cout<<nodes<<" ";
    }
    return 0;
}