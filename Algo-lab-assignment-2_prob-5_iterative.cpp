#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int main(){
    int n,operations;
    cin >> n;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    for(int i=4;i<=n;i++){
        operations=dp[i-1]+1;

        if(i%2==0){
            operations=min(operations,dp[i/2]+1);
        }
         if(i%3==0){
            operations=min(operations,dp[i/3]+1);
        }
        dp[i]=operations;
    }

    cout<<dp[n]<<endl;
}