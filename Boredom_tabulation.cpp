#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int dp[N];
int temp_dp[N];
int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        dp[x]++;
    }
    temp_dp[0]=0;
    temp_dp[1]=dp[1];

    for(int i=2;i<=N;i++){
        temp_dp[i]=max(temp_dp[i-1],dp[i-2]+i*dp[i]);
    }

    cout<<temp_dp[N];
}