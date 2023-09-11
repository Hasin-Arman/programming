#include<bits/stdc++.h>
using namespace std;
char getCapital(string s){
    if(isupper(s[0])){
        return s[0];
    }
    if(s.size()==1){
        return 'N';
    }
    string x=s.substr(1,s.size()-1);
    return getCapital(x);

}
int main(){
    string s;
    cin>>s;
    char tmp=getCapital(s);
    cout<<tmp;
}