#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int dp[N][N];

int main()
{
    int m, n;
    cin >> m >> n;

    dp[0][0] = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            int ans = 0;
            if (i > 0)
            {
                ans += dp[i - 1][j];
            }
            if (j > 0)
            {
                ans += dp[i][j - 1];
            }
            dp[i][j] = ans;
        }
    }
    cout << dp[m - 1][n - 1] << "\n";
}