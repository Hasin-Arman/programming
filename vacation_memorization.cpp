#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int happiness[N][4], dp[N][4];

int fun(int day,int current_task){
    if(day==1){
        return happiness[day][current_task];
    }

    if(dp[day][current_task]!=-1){
        return dp[day][current_task];
    }
    int ans=0;
    for(int last_task=1;last_task<=3;last_task++){
        if(last_task!=current_task){
            int candidate_ans=fun(day-1,last_task) + happiness[day][current_task];
            ans=max(ans,candidate_ans);
        }
    }
    dp[day][current_task]=ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> happiness[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            dp[i][j] = -1;
        }
    }

    int ans1=fun(n,1);
    int ans2=fun(n,2);
    int ans3=fun(n,3);
    int ans=max({ans1,ans2,ans3});
    cout<<ans<<endl;
}