#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count[256]={};
    for(int i=0;i<s.length();i++){
        count[s[i]]+=1;
    }
    int odd_count=0;
    for(int i=0;i<256;i++){
        if(count[i]%2!=0){
            odd_count++;
        }
    }
    if(odd_count>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}