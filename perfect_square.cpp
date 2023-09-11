#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
const int N = 1e5;
int dp[N];
int solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int min_count = INF;
    for (int i = 1; i <= sqrt(n); i++)
    {
        min_count = min(min_count, 1 + solve(n - (i * i)));
    }
    dp[n] = min_count;
    return min_count;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << solve(n) << endl;
}