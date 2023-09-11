#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
public:
    T data;
    node* next;
    node* prev;
};
template<class T>
class Deque{
public:
    node<T>* head;
    node<T>* tail;
    int sz;
    Deque(){
        head=NULL;
        tail=NULL;
        sz=0;
    }

    node<T>* createNode(T value) {
        node<T>* newNode = new node<T>;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }

    void push_front(T value) {
        node<T>* newNode =createNode(value);
        if(sz==0){
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        sz++;
    }

    void push_back(T value) {
        node<T>* newNode =createNode(value);
        if(sz==0){
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        sz++;
    }

    void pop_front(){
        if(sz==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        if(sz==1){
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<T>* a=head;
        head=a->next;
        delete a;
        head->prev=NULL;
        sz--;
    }

    void pop_back(){
         if(sz==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        if(sz==1){
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<T>* a=tail;
        tail=a->prev;
        delete a;
        tail->next=NULL;
        sz--;
    }

    T max(){
        node<T>* a=head;
        T max=a->data;
        while(a!=NULL){
            if(a->data >max){
                max=a->data;
            }
            a=a->next;
        }
        return max;
    }

      T min(){
        node<T>* a=head;
        T min=a->data;
        while(a!=NULL){
            if(a->data <min){
                min=a->data;
            }
            a=a->next;
        }
        return min;
    }

    T front(){
          if(sz==0){
            cout<<"queue is empty"<<endl;
            T a; 
            return a;
        }
        return head->data;
    }

      T back(){
          if(sz==0){
            cout<<"queue is empty"<<endl;
            T a; 
            return a;
        }
        return tail->data;
    }
};  

int main(){
Deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    cout<<"Max: "<<d.max()<<"\n";
    cout<<"Min: "<<d.min()<<"\n";
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

}