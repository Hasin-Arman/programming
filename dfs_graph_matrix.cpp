#include<bits/stdc++.h>
using namespace std;
const int n=1e6;
int visited[n];
vector<int>adj_list[n];
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
void dfs(int src){
    cout<<src<<" ";
    visited[src]=1;
    for(int adj_node:adj_list[src]){
        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }

}

int main(){
    int node,edges;
    cin>>node>>edges;
    int adj_matrix[node][node];
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            adj_matrix[i][j] = 0;
        }
    }
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    for(int i =0;i<node;i++){
        for(int j =0;j<node;j++){
            if(adj_matrix[i][j]==1){
                adj_list[i].push_back(j);
            }
        }
    }
    int src=0;
    dfs(src);
}