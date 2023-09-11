#include<bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];

int unique_path(int m,int n){
    if(m==0 && n==0){
        return 1;
    }

    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int ans=0;
    if(m>0){
        ans+=unique_path(m-1,n);
    }
    if(n>0){
        ans+=unique_path(m,n-1);
    }
    dp[m][n]=ans;
    return ans;
}

int main(){
    int m,n;
    cin >> m >> n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i][j] =-1;
        }
    }

    cout<<unique_path(m-1,n-1)<<endl;
}