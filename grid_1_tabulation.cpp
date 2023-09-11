#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
long long dp[N][N];
int ara[N][N];


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

    dp[0][0]=1;

    for(int i=0; i < row; i++){
        for(int j=0; j < row; j++){
            if(i==0 && j==0){
                continue;
            }
            long long ans =0;
            if(ara[i][j]!=-1){
                if(i>0){
                   ans+=dp[i-1][j];
                }
                if(j>0){
                   ans+=dp[i][j-1];
                }
            }
            dp[i][j] = ans;   
        }
    }
    cout<< dp[row-1][row-1]<<endl;
}