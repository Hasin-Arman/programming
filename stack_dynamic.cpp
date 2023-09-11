#include<bits/stdc++.h>
using namespace std;
template<class T>

class Stack{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack(){
        stack_size=0;
        a=new T[1];
        array_cap=1;
    }

    void increase_size(){
        T *temp;
        temp=new T[array_cap*2];
        for(int i=0;i<array_cap;i++){
            temp[i]=a[i];
        }
        swap(a,temp);
        delete [] temp;
        array_cap=array_cap*2;
    }

    void push(T val){
        if(stack_size+1>array_cap){
            increase_size();
        }
        stack_size=stack_size+ 1;
        a[stack_size-1]=val;
    }

    void pop(){
        if(stack_size==0){
            cout<<"stack is empty!"<<"\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size=stack_size-1;
    }

    T top_element(){
        if(stack_size==0){
            cout<<"stack is empty"<<endl;
            T a;
            return a;
        }
        return a[stack_size-1];
    }

};

int main(){
 Stack<char> s;
 s.push('s');
 cout<<s.top_element()<<"\n";
 s.push('d');
 cout<<s.top_element()<<"\n";
 s.push('f');
 cout<<s.top_element()<<"\n";
 s.pop();
 cout<<s.top_element()<<"\n";
 s.pop();
 cout<<s.top_element()<<"\n";
  s.pop();
 cout<<s.top_element()<<"\n";
}