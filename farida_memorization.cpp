#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int dp[N];
int ara[N];
int solve(int n){
    if(n==1){
        return ara[1];
    }
    if(n==2){
        return max(ara[1],ara[2]);
    }

    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=max(solve(n-1),solve(n-2)+ara[n]);
    return dp[n];
}
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> ara[i];
        }
        for(int i=0;i<=N;i++){
            dp[i] =-1;
        }
        cout<<"Case "<<i<<":"<<solve(n)<<endl;
    }
}