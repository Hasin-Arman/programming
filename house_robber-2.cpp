#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int dp[N];
int money[N];
int max_profit(int n,vector<int>values)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return values[0];
    }
    
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int ans = max(values[n-1] + max_profit(n - 2,values), max_profit(n - 1,values));
    dp[n] = ans;
    return ans;
}
/*
5
2 7 9 3 1
*/

int main()
{
    int n;
    cin >> n;
    vector<int> skipping_first;
    vector<int> skipping_last;
    for (int i = 0; i < n; i++)
    {
        cin >> money[i];
    }

    for(int i = 1; i<n; i++){
        skipping_first.push_back(money[i]);
    }
    for(int i = 0; i<n-1; i++){
        skipping_last.push_back(money[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    int ans1=max_profit(n-1,skipping_first);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    int ans2=max_profit (n-1,skipping_last);
    cout << max(ans1,ans2) << endl;
}