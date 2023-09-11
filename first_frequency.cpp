#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        mp[v[i]]= mp[v[i]]+1;
        
    }
    int tmp;
    for(auto it:mp){
        if(it.second>1){
            tmp=it.first;
            break;
        }
    }
    int index;
    for(int i=0;i<n;i++){
        if(tmp==v[i]){
            index=i;
            break;
        }
    }
    cout<<"First duplicate element is "<<tmp<<",First occurring at index "<<index;

}