#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 1e5 + 5;
int nums[N];
int dp[N][M];

/*
6 30
3 34 4 12 5 2
*/

int main()
{
    int n,target;
    cin >> n >>target;
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
   dp[0][0]=1;

   for(int i = 1; i <= target; i++){
        dp[0][i]=0;
   }

   for(int i=1; i <= n; i++){
        for(int sum=0;sum<=target;sum++){
            if(sum<nums[i]){
                dp[i][sum]=dp[i-1][sum];
            }
            else{
                int ans1=dp[i-1][sum];
                int ans2=dp[i-1][sum-nums[i]];
                int ans=ans1 || ans2;
                dp[i][sum]=ans;
            }
        }
   }
    cout<<dp[n][target]<<endl;
}