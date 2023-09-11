#include <bits/stdc++.h>
using namespace std;
const int N = 60;
const int M = 1005;
const int MOD=100000007;
int dp[N][M];
int coins[N];
int limit[N];

int coin_change(int n,int k){
    if(n==0){
        if(k==0){
            return 1;
        }
        else return 0;
    }

    if(dp[n][k]!=-1){
        return dp[n][k];
    }

    int ans=coin_change(n-1,k);
    for(int i=1;i<=limit[n];i++){
        if(k-i*coins[n]<0){
            break;
        }
        int ans2=coin_change(n-1,k-i*coins[n]);
        ans=(ans+ans2)%MOD;
    }
    dp[n][k]=ans;
    return ans;
}

int main()
{
    int t,tst=0;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            cin >> coins[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> limit[i];
        }

        for(int i=0; i <=n; i++){
            for(int j=0; j <= k; j++){
                dp[i][j] = -1;
            }
        }
        cout<<"Case "<<++tst<<":"<<coin_change(n,k)<<endl;
    }
}
