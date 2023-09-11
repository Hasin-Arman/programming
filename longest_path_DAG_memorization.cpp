#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
vector<int>adj_list[N];
int root,target;

int longest_path(int node){
    if(node==root){
        return 0;
    }

    if(dp[node]!=-1){
        return dp[node];
    }
    int ans =0;
    for(auto parent:adj_list[node]){
        int dist=longest_path(parent);
        ans=max(ans,dist);
    }
    ans++;
    dp[node] = ans;
    return ans;
}

int main()
{
    int node,edge;
    cin >> node >> edge;

    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        adj_list[v].push_back(u);
    }

    for(int i=1;i<=node;i++){
        dp[i]=-1;
    }
    cin>>root>>target;
    cout<<longest_path(target)<<"\n";
}