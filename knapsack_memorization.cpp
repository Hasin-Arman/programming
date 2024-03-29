#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int W=1e5+5;
int val[N];
int wt[W];
long long dp[N][W];

long long knapsack(int n,int cap){
    if(n==0){
        return 0;
    }

    if(dp[n][cap]!=-1){
        return dp[n][cap];
    }

    if(cap<wt[n]){
        long long ans=knapsack(n-1,cap);
        dp[n][cap]=ans;
        return ans;
    }
    long long ans1=val[n]+knapsack(n-1,cap-wt[n]);
    long long ans2=knapsack(n-1,cap);
    long long ans=max(ans1,ans2);
    dp[n][cap]=ans;
    return ans;
}

int main(){
    int n,w;
    cin >> n >> w;
    for(int i=1;i<=n;i++){
        cin >>wt[i]>>val[i];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j] = -1;
        }
    }
    cout<<knapsack(n,w)<<endl;
}