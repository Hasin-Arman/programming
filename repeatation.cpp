#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int v[26],largest;
    for(int i = 65; i <=90;i++) {
        v[i]=0;
    }
    for(int i = 0; i <str.size();i++){
        v[int (str[i])]+=1;
    }

    for(int i = 65; i <=90;i++){
        largest=max(largest,v[i]);
    } 
    cout<<largest;
    return 0;
}