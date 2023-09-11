#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
vector<int>dp(N,INT_MAX);
int solve(int n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=INT_MAX){
        return dp[n];
    }
    vector<int>digits;
    for(auto i:to_string(n)){
        digits.push_back(i-'0');
    } 
    for (auto val:digits){
        dp[n]=min(dp[n],solve(n-val)+1);
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    cout<<solve(n);
}