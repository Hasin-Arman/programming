#include<bits/stdc++.h>

using namespace std;

int main(){
    int node;
    cin >> node;
   int adj_matrix[node][node];
    for(int i = 0; i < node;i++){
        for(int j = 0; j <node; j++){
            cin>>adj_matrix[i][j];
        }
    }

    vector<int> v[node];
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if(adj_matrix[i][j]==1){
                v[i].push_back(j);
            }
        }
    }

     for(int i=0; i<node ; i++){
        cout<<i<<":";
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}