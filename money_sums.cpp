#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N];
int main()
{
    int n;
    cin >> n;
    int ara[N];
    for (int i = 1; i <= n; i++)
    {
        cin >> ara[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += ara[i];
    }
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int value = sum; value >= ara[i]; value--)
        {
            dp[value] = dp[value] || dp[value - ara[i]];
        }
    }
    int count = 0;
    for (int i = 1; i <= sum; i++)
    {
        if (dp[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= sum; i++)
    {
        if (dp[i] == 1)
        {
            cout << i << " ";
        }
    }
}