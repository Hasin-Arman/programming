#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node* prev;
};
class LinkedList{
public:
    node* head;
    node* tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }

    node* createNode(int value) {
        node* newNode = new node;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }

    void insertHead(int value) {
        node* newNode =createNode(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }

    void insertTail(int value) {
        node* newNode =createNode(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

    void insertMid(int val){
        node* newNode=createNode(val);
        head->next=newNode;
        newNode->prev=head;
        newNode->next=tail;
    }

    void print(){
        node* a=head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};  

int main(){
    LinkedList a;
    LinkedList b;
	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100


}