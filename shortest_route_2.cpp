#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
const long long INF=1e18;
long long d[N][N];

int main(){
    int n,m,q;
    cin >> n >> m >> q;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j] = INF;
        }
    }
    for(int i=0;i<m;i++){
        int u,v;
        long long w;
        cin >> u >> v >> w;
        d[u][v]=min(d[u][v],w);
        d[v][u]=min(d[v][u],w);
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

    for(int i=0;i<q;i++){
        int x,y;
        cin >> x >> y;
        if(d[x][y]==INF){
            cout <<"-1"<<endl;
        }
        else{
            cout<<d[x][y]<<endl;
        }
    }


}