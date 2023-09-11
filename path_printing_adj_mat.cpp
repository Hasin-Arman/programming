#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
int node, edge;
int parent[n];
int adj_matrix[5][5];
void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    parent[src] = -1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for (int j = 1; j <=node; j++)
        {
            if (adj_matrix[head][j] == 1)
            {
                if (visited[j] == 0)
                {
                    parent[j] = head;
                    visited[j] = 1;
                    q.push(j);
                }
            }
        }
    }
}

int main()
{
    cin >> node >> edge;
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            adj_matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }
    int src = 1;
    bfs(src);

    if (visited[node] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
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