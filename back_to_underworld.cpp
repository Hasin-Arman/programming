#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
vector<int> adj_list[n];
int color[n];

bool dfs(int src)
{
    visited[src] = 1;
    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            if (color[src] == 1)
            {
                color[adj_node] = 2;
            }
            else
            {
                color[adj_node] = 1;
            }
            bool colorable = dfs(adj_node);
            if (!colorable)
            {
                return false;
            }
        }
        else
        {
            if (color[src] == color[adj_node])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    int tmp=0;
    while (t--)
    {
        int node, edges;
        cin >> node >> edges;
        for (int i = 0; i < edges; i++)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        bool is_bicolorable = true;
        for (int i = 1; i <= node; i++)
        {
            if (visited[i] == 0)
            {
                color[i] = 1;
                bool ok = dfs(i);
                if (!ok)
                {
                    is_bicolorable = false;
                    break;
                }
            }
        }
        int max_value = 0;
        if (is_bicolorable)
        {
            for (int i = 1; i <= node; i++)
            {
                max_value = max(max_value, color[i]);
            }
        }
        cout <<"Case "<<++tmp<<":"<<max_value << endl;
    }
}