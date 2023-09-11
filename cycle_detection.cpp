#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
vector<int> adj_list[N];
int visited[N];

bool cycle_detector(int src){
    visited[src]=1;
    for(int adj_node:adj_list[src]){
        if(visited[adj_node]==0){
            bool cycle=cycle_detector(adj_node);
            if(cycle){
                return true;
            }
        }
        else if(visited[adj_node]==1){
            return true;
        }
    }
    visited[src] = 2;
    return false;
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    bool cycle_exist=false;
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            bool cycle_detected=cycle_detector(i);
            if(cycle_detected){
                cycle_exist=true;
                break;
            }
        }
    }

    if(cycle_exist){
        cout<<"Cycle detected"<<endl;
    }
    else{
        cout<<"No cycle detected"<<endl;
    }
}