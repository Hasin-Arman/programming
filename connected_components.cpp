#include<bits/stdc++.h>
using namespace std;
const int n=1e6;
int visited[n];
vector<int>adj_list[n];
void bfs(int src){
    queue<int>q;
    visited[src]=1;
    q.push(src);

    while(!q.empty()){
        int head=q.front();
        q.pop();
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
    int count=0;
    for(int i=0;i<node;i++){
        if(visited[i]==0){
            bfs(i);
            count++;
        }
    }
    cout<<count<<endl;
}