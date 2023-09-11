#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
long long dp[N][N];
int ara[N][N];
long long grid_paths(int n, int m)
{
    if (n == 0 && m == 0)
    {
        return 1;
    }

    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    long long ans=0;
    if (ara[n][m] != -1)
    {
        if(n>0){
            ans+=grid_paths(n-1,m);
        }
        if(m>0){
            ans+=grid_paths(n,m-1);
        }
    }
    dp[n][m]=ans;
    return ans;
}

int main()
{
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < row; j++)
        {
            if (input[j] == '*')
            {
                ara[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << grid_paths(row - 1, row - 1) << endl;
}