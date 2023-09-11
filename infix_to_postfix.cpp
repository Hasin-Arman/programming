#include<bits/stdc++.h>

using namespace std;

int precedence(char c){
    if(c=='+' || c=='-'){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    string s;
    cin >> s;

    stack<char> st;
    string result="";
    for(int i = 0; i<s.size(); i++){
        char now = s[i];

        if(now>='a' && now<='z'){
            result=result+now;
        }
        else{
            while(st.size()>0 && precedence(now)<=precedence(st.top())){
                result=result+st.top();
                st.pop();
            }
            st.push(now);
        }
    }

    while(st.size()>0){
        result=result+st.top();
        st.pop();
    }

    cout<<result<<endl;
}