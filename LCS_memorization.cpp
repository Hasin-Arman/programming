#include<bits/stdc++.h>
using namespace std;
const int N =3003;
string s,t;
int dp[N][N];

int LCS(int i,int j){
    if(i==s.length() || j==t.length()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    if(s[i]==t[j]){
        return 1+LCS(i+1,j+1);
    }
    int ans=max(LCS(i+1,j),LCS(i,j+1));
    dp[i][j] =ans;
    return ans;
}

int main(){
    cin >> s;
    cin >> t;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length();j++){
            dp[i][j] =-1;
        }
    }
    cout<<LCS(0,0)<<endl;
}