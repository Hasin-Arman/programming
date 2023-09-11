#include<bits/stdc++.h>
using namespace std;
int dp[100];
int tribonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }

    if(dp[n]!=0){
        return dp[n];
    }
    
    dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    return dp[n];

}

int main(){
    int n;
    cin >> n;
    cout<<tribonacci(n)<<endl;
}