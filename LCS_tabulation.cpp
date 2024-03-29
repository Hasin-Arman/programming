#include<bits/stdc++.h>
using namespace std;
const int N =3003;
string s,t;
int dp[N][N];

int main(){
    cin >> s;
    cin >> t;
    int n=s.length();
    int m=t.length();

    for(int i=0; i<=n; i++){
        dp[i][m]=0;
    }
    for(int j=0; j<=m; j++){
        dp[n][j]=0;
    }

    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(s[i]==t[j]){
                dp[i][j]=1+dp[i+1][j+1];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }

    cout<<dp[0][0]<<endl;
}