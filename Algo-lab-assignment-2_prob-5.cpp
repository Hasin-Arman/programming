#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int min_operations(int n){
    if(n==1){
        return 0;
    }

    if(n==2 ||n==3){
        return 1;
    }

    if(dp[n]!=-1){
        return dp[n];
    }
    int operations;
    operations=min_operations(n-1)+1;
    if(n%2==0){
        operations=min(operations,min_operations(n/2)+1);
    }
    if(n%3==0){
        operations=min(operations,min_operations(n/3)+1);
    }
    dp[n]=operations;
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    cout<<min_operations(n)<<endl;
}