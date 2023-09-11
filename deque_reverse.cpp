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
    int rev;
    Deque(){
        head=NULL;
        tail=NULL;
        sz=0;
        rev=0;
    }

    node<T>* createNode(T value) {
        node<T>* newNode = new node<T>;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }

    void insert_at_first(T value){
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

    void insert_at_last(T value) {
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

    void push_front(T value) {
        if(rev==0){
            insert_at_first(value);
        }
        else{
            insert_at_last(value);
        }
    }

    
    void push_back(T value) {
       if(rev==0){
            insert_at_last(value);
        }
        else{
            insert_at_first(value);
        }
    }

    void delete_at_first(){
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

    void delete_at_last(){
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

    void pop_front(){
      if(rev==0){
            delete_at_first();
        }
        else{
            delete_at_last();
        }
    }

    
    void pop_back(){
         if(rev==0){
            delete_at_last();
         }
         else{
            delete_at_first();
         }
    }

    T front(){
          if(sz==0){
            cout<<"queue is empty"<<endl;
            T a; 
            return a;
        }

        if(rev==0){
            return head->data;
        }
        else{
            return tail->data;
        }
    }

      T back(){
          if(sz==0){
            cout<<"queue is empty"<<endl;
            T a; 
            return a;
        }
        if(rev==0){
            return tail->data;
        }
        else{
            return head->data;
        }
        
    }

    void reverse(){
        if(rev==0){
            rev=1;
        }
        else{
            rev=0;
        }
    }
};  

int main(){
Deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.reverse();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";
}