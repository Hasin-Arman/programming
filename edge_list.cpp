#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;

    v.push_back({0,1});
    v.push_back({1,2});
    v.push_back({2,3});
    v.push_back({1,3});

    for(int i=0; i<v.size(); i++){
        cout << v[i][0] <<" "<< v[i][1] <<endl;
    }

}