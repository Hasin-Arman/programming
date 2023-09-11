#include<bits/stdc++.h>
using namespace std;
 
 /*
4 4
0 1
1 2
2 3
1 3
 */
int main() {
 
    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;
    int a[n][n];
    vector<vector<int>> ara;
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            a[i][j] = 0;
        }
    }

    // TODO: Declare your favorite data structures here.
 
 
    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v
        // TODO: Do stuffs with u and v
        ara.push_back({u,v});
    }

    for(int i = 0; i <n;i++){
        a[ara[i][0]][ara[i][1]]=1;
    }

    for(int i = 0; i <n;i++){
        for(int j = 0; j < n;j++){
            cout<< a[i][j]<<" ";
        }
        cout<< endl;
    }
 
    // TODO: Print your representation like shown in module - 2
 
 
    return 0;
}