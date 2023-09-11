#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int,int>> pm;
    pair<int,int> p;
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        p.first =v[i];
        p.second =i;
        pm.push_back(p);
    }
    sort(pm.begin(),pm.end());

    for(auto it:pm){
        cout<<"value "<<it.first<<" "<<"previous index: "<<it.second<<endl;
    }
}