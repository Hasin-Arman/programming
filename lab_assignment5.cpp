#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
};

class linkedList
{
public:
    int size;
    node *head;
    linkedList()
    {
        head = NULL;
        size = 0;
    }

    node *createNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    };

    void insert_at_head(int value)
    {
        size++;
        node *a = createNode(value);

        if (head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void traverse_list(){
        node *a=head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }

    int get_value(int index){
        node *a=head;
        int i=0;
        while(a!=NULL){
            if(i==index){
                return a->data;
            }
            a=a->next;
            i++;
        }
        return -1;
    }

    void insert_at_any_index(int index,int value){
        if(index<0 || index>size){
            return;
        }

        if(index==0){
            insert_at_head(value);
            return;
        }
        size++;
        node* a=head;
        int current_index=0;

        while(current_index!=(index-1)){
            a=a->next;
            current_index++;
        }

        node* newNode=createNode(value);
        newNode->next=a->next;
        a->next=newNode;
    }

    void delete_head(){
        node *a=head;
        if(head==NULL){
            return;
        }
        size--;
        head=a->next;
        delete a;
    }

    void delete_any_index(int index){
        if(index<0 || index>size-1){
            return;
        }

        if(index==0){
            delete_head();
            return;
        }
        size--;
        node *a=head;
        int current_index=0;
        while(current_index!=(index-1)){
            a=a->next;
            current_index++;
        }
        node *b=a->next;
        a->next=b->next;
        delete b;
    }

    int get_size()
    {
        return size;
    }
};

int main()
{
    linkedList l;
    l.insert_at_head(5);
    l.insert_at_head(6);
    l.insert_at_head(30);

    // l.insert_at_any_index(0,100);
    // l.traverse_list();
    // cout<< l.get_size()<<"\n";
    l.traverse_list();
    cout<<l.get_value(6)<<endl;
    cout<< l.get_size()<<"\n";


}