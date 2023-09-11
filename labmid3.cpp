#include<bits/stdc++.h>

using namespace std;

int palindrome(string chars,int first,int last){
    if(first==last){
        return 1;
    }

    if(chars[first]!=chars[last]){
        return 0;
    }

    if(first<last){
        first++;
        last--;
        return palindrome(chars,first,last);
    }
}

int main(){
    string chars;
    cin >> chars;
    int result=palindrome(chars,0,chars.size()-1);

    if(result==1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
}