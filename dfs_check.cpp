#include<bits/stdc++.h>
using namespace std;
const int n=1e6;
int visited[n];
vector<int>adj_list[n];
/*

    0-----1-----2-----3
          |     |
          |     |
          5-----4
output->0 1 5 4 2 3
Input->
    6 6
    0 1
    1 2
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
    int count=0;
    for(int adj_node:adj_list[src]){
        count++;
        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }
    cout<<endl;
    cout<<src<<"->"<<count<<endl;
}

int main(){
    int node,edges;
    cin>>node>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src=0;
    dfs(src);
}