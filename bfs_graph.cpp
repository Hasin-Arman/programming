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
void bfs(int src){
    queue<int>q;
    visited[src]=1;
    q.push(src);

    while(!q.empty()){
        int head=q.front();
        q.pop();
        cout<<head<<" ";
        for(int adj_node:adj_list[head]){
            if(visited[adj_node]==0){
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}

int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src=0;
    bfs(src);
}