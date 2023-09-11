#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
const int INF = 2e5;
int h[N];
int dp[N];
int n, k;
int min_cost(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = INF;
    for (int i = 1; i <= k; i++)
    {
        if (n - i <= 0)
        {
            break;
        }
        int candidate_ans = min_cost(n - i) + abs(h[n] - h[n - i]);
        ans = min(ans, candidate_ans);
    }
    dp[n]=ans;
    return ans;
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << min_cost(n) << endl;
}