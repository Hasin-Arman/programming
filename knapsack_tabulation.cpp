#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int W = 1e5 + 5;
int val[N];
int wt[W];
long long dp[N][W];

int main()
{
    int n, w;
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    for (int i = 0; i <= w; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int cap = 0; cap <= w; cap++)
        {
            if (cap < wt[i])
            {
                dp[i][cap] = dp[i - 1][cap];
            }
            else
            {
                long long ans1 = val[i] + dp[i - 1][cap - wt[i]];
                long long ans2 = dp[i - 1][cap];
                long long ans = max(ans1, ans2);
                dp[i][cap] = ans;
            }
        }
    }
    cout << dp[n][w] << endl;
}