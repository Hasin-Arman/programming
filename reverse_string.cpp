#include<bits/stdc++.h>
using namespace std;
string reverse_str(string str){
    if(str.size()==1){
        return str;
    }
    int n=str.size();
    string sub=str.substr(1,n-2);
    string x=str[n-1]+reverse_str(sub)+str[0];
    return x;
}
int main(){
    string str;
    cin >> str;
    string tmp= reverse_str(str);
    cout<<tmp<<endl;
}