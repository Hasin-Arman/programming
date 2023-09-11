#include <bits/stdc++.h> 
using namespace std;
const int Max=100;
class my_class{

};
template<my_class T>
class Stack{
public:
    T1,T2,T3 a[Max];
    int array_size;

    Stack(){
        array_size=0;
    }

    void push(T1 val){
        if(array_size+1>Max){
            cout<<"can't insert"<<endl;
            return;
        }
        array_size=array_size+1;
        a[array_size-1]=val;
    }
    void push(T2 val){
        if(array_size+1>Max){
            cout<<"can't insert"<<endl;
            return;
        }
        array_size=array_size+1;
        a[array_size-1]=val;
    }
    void push(T3 val){
        if(array_size+1>Max){
            cout<<"can't insert"<<endl;
            return;
        }
        array_size=array_size+1;
        a[array_size-1]=val;
    }

    void pop(){
        if(array_size==0){
            return;
        }
        array_size=array_size-1;
    }

    T1 top(){
        return a[array_size-1];
    }
    T2 top(){
        return a[array_size-1];
    }
    T3 top(){
        return a[array_size-1];
    }

};
int main(){
Stack<int,double,char>s;
s.push(1);
s.push(1.5);
s.push('c');
cout<<s.top();
}