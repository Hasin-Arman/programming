#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int dp[N];
int money[N];
int max_profit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = max(money[n] + max_profit(n - 2), max_profit(n - 1));
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
    for (int i = 1; i <= n; i++)
    {
        cin >> money[i];
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << max_profit(n) << endl;
}