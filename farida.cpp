#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int dp[N];
int ara[N];

int main()
{
    int t,n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >>n;
        if(n==0){
            cout << "Case " <<i<<":"<<0<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            cin >>ara[i];
        }

        dp[1]=ara[1];
        dp[2]=max(dp[1],ara[2]);

        for(int i=3;i<=n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+ara[i]);
        }

        cout<<"Case "<<i<<":"<<dp[n]<<endl;
    }
}