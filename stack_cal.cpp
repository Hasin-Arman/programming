#include<bits/stdc++.h>

using namespace std;

int precedence(char c){
    if(c =='+' || c =='-'){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    stack<char>s;
    string str;
    cin>>str;
    string result="";
    for(int i=0; i<str.size();i++){
        char now=str[i];
        if(now>='a' && now<='z'){
            result += now;
        }
       else if(now=='('){
            s.push(now);
        }

      else if(now==')'){
            while(s.top()!='('){
                result += s.top();
                s.pop();
            }
            s.pop();
        }
    
        else{
            while(s.size()>0 && s.top()!='(' && precedence(now)<=precedence(s.top())){
                result=result + s.top();
                s.pop();//(a+b)*(c+d)
            }
            s.push(now);
        } 
    }
    while(s.size()>0){
        result=result + s.top();
        s.pop();
    }

    cout<<result<<endl;
}