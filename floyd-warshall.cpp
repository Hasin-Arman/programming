#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
const int INF=1e9;
int d[N][N];

int main(){
    int n,m;
    cin >> n>> m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j]=INF;
        }
    }
    for(int i=0; i< m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        d[u][v]=w;
    }
    for(int i=1;i<=n;i++){
        d[i][i]=0;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }

}