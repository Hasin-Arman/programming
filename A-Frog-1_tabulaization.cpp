#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int dp[N];
int h[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    dp[1]=0;
    for(int i = 2; i <= n; i++){
        if(i==2){
            dp[i] = dp[i-1]+abs(h[i]-h[i-1]);
        }
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout<<dp[n]<<endl;
}