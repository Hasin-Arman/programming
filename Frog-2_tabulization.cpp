#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
const int INF = 2e5;
int h[N];
int dp[N];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    dp[1] = 0 ;
    for (int i = 2; i <= n; i++)
    {
        int ans = INF;
        for (int j = 1; j <= k; j++)
        {
            if (i - j <= 0)
            {
                break;
            }
            int candidate_ans = dp[i - j] + abs(h[i] - h[i - j]);
            ans = min(ans, candidate_ans);
        }
        dp[i] = ans;
    }
    cout << dp[n] << endl;
}