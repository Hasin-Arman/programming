#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 1e5 + 5;
int dp[N][M];

int main()
{
    int n;
    vector<int> nums;
    while (cin >> n){
        nums.push_back(n);
    }
    
    for(auto i:nums){
        cout<<i<<" "<<endl;
    }
}