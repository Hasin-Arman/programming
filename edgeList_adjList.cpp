#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    vector<vector<int>> edge_list;
    vector<int> adj_list[n];
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        edge_list.push_back({a,b});
    }

    for(int i=0;i<n;i++){
        adj_list[edge_list[i][0]].push_back(edge_list[i][1]);
    }

    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj_list[i].size();j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<"\n";
    }



}