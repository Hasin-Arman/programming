#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int ,int> mp;
    int n;
    cin >> n;
    vector<int> ara(n);
    for(int i=0; i<n; i++){
        cin >> ara[i];
    }
    for(int i=0; i<n; i++){
        mp[ara[i]]=mp[ara[i]]+1;
    }
    for(auto it:mp){
        cout<<it.first<<":"<<it.second<<endl;
    }
}