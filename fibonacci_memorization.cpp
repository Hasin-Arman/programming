#include<bits/stdc++.h>
using namespace std;
int dp[100];
int fibo(int n){
    if(n<=2){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];

}

int main(){
    int n;
    cin >> n;
    cout<<fibo(n)<<endl;
}