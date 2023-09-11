#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
vector<int> adj_list[n];
int level[n];
int parent[n];
int i=1;
void dfs(int src)
{
    visited[src] = 1;
    if (i == 1)
    {
        level[src] = 1;
        parent[src] = -1;
    }
    i++;
    for (auto adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            level[adj_node] = level[src] + 1;
            parent[adj_node] = src;
            dfs(adj_node);
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
    dfs(src);

    if (visited[node] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    else
    {
        cout << level[node] << endl;
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
    for (int nodes : path)
    {
        cout << nodes << " ";
    }
    return 0;
}