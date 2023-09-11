#include <bits/stdc++.h>
using namespace std;
const int n = 1e6;
int visited[n];
int node;
vector<int>adj[n];
/*

    0-----1     2-----3
          |     |
          |     |
          5-----4
output->0 1 5 4 2 3
Input->
    6 5
    0 1
    2 3
    1 5
    5 4
    4 2

    Time complexity->O(V+E)
    space complexity->O(V)
*/
void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";  
        for(auto i: adj[head]){
            if(visited[i]==0){
                visited[i] = 1;
                q.push(i);
            }
        }    
    }
}

int main()
{
    int edge;
    cin >> node >> edge;
    int adj_matrix[node][node];
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
    for(int i =0;i<node;i++){
        for(int j =0;j<node;j++){
            if(adj_matrix[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }
    int src = 0;
    bfs(src);
}