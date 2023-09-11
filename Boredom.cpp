#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int dp[N];
int boredom(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return dp[1];
    }
    return max(boredom(n-1),boredom(n-2)+n*dp[n]); 
}
int main(){
    int n,x,max_value=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        dp[x]++;
        max_value=max(max_value,x);
    }
    cout<<boredom(max_value)<<endl;

}