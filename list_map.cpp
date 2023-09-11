#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]] =mp[v[i]]+1;
    }
    vector<int> tmp;
    int index=-1;
    for(auto it:mp){
        for(auto it2:v){
            if(it.first==it2 ){
                tmp.push_back(index);
                index++;
            }

        }
    }

    for(auto it:tmp){
        cout<<it<<" ";
    }
        
}