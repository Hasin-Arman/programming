#include <bits/stdc++.h>
using namespace std;
const int N = 100;
const int M = 1e6;
int dp[N][M];
int coins[N];

int main()
{

        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> coins[i];
        }
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int target = 0; target <= k; target++)
            {
                dp[i][target]=dp[i-1][target];

                for(int j=1;j<=M;j++){
                    if(target-j*coins[i] < 0){
                        break;
                    }
                    int ans=dp[i-1][target-j*coins[i]];
                    dp[i][target]=dp[i][target]+ans;
                }
            }
        }
        cout<<dp[n][k]<<endl;
    }
