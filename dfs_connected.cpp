#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
int check=0;
vector<int> adj_list[n];
/*
9 12
0 2
7 8
0 4
0 5
6 7
1 4
1 5
2 3
2 4
4 5
8 6
1 8
*/
void dfs(int src,int node)
{
    if (src == node)
    {
        check=1;
    }
    visited[src] = 1;
    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == 0)
        {
            dfs(adj_node,node);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 2;
    dfs(src,6);
    if (check==1)
    {
        cout << "connected"<< "\n";
    }
    else
    {
        cout << "not connected"<< "\n";
    }

    return 0;
}