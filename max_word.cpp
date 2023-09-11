#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(std::cin,s);
    string tmp="";
    vector<string> v;
    for(auto i:s){
        if(i==' '){
            v.push_back(tmp);
            tmp="";
        }
        else{
            tmp=tmp+i;
        }
    }
    v.push_back(tmp);
    map<string,int>mp;

    for(int i=0;i<v.size();i++){
        mp[v[i]]=mp[v[i]]+1;
    }

    int max_freq=0;
    for(auto i:mp){
        max_freq=max(max_freq,i.second);
    }
    string w;
    for(auto j:mp){
        if(max_freq==j.second){
            w=j.first;
            break;
        }
    }
    cout<<"Maximum occurring word is->"<<w<<" Occurring "<<max_freq<<" times"<<endl;
}