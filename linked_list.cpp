#include<bits/stdc++.h>

using namespace std;
class node{
public:
  int data;
  node * nxt;
};

class LinkedList{
public:    
    node * head;
    LinkedList(){
        head = NULL;
    }

    node * createNode(int value){
        node * new_node = new node;
        new_node->data=value;
        new_node->nxt=NULL;
        return new_node;
    }

    void insert_at_head(int value){
            node* a=createNode(value);
            if(head==NULL){
                head=a;
                return;
            }
            a->nxt=head;
            head=a;
    }

    void traverse_list(){
        node *a=head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }

    int search_distinct_value(int value){
        node *a=head;
        int index = 0;
        while(a!=NULL){
            if(a->data==value){
                return index;
            }
            index++;
            a=a->nxt;
        }
        return -1;	
    }

    int search_all_value(int value){
        node *a=head;
        int index = 0;
        while(a!=NULL){
            if(a->data==value){
                 cout<<index<<" ";
            }
            index++;
            a=a->nxt;
        }
    }
};

int main(){
LinkedList l;
l.insert_at_head(10);
l.insert_at_head(20);
l.insert_at_head(30);
l.insert_at_head(40);
l.insert_at_head(30);
l.traverse_list();
cout << l.search_distinct_value(50)<<"\n"; 
l.search_all_value(30);
}