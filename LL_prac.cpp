#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    node *createNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void insert_at_head(int value)
    {
        size++;
        node *a = createNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void insert_at_any_index(int index, int value)
    {
        if (index < 0 || index > size)
        {
            return;
        }
        if (index == 0)
        {
            insert_at_head(value);
            return;
        }
        size++;
        node *a = head;
        int current_index = 0;

        while (current_index != (index - 1))
        {
            a = a->nxt;
            current_index++;
        }
        node *newNode = createNode(value);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }


    void delete_head()
    {
        size--;
        node *a = head;
        if (head == NULL)
        {
            return;
        }
        head = a->nxt;
        delete a;
    }

    void delete_any_index(int index)
    {
        if (index < 0 || index > (size - 1))
        {
            return;
        }

        if (index == 0)
        {
            delete_head();
            return;
        }
        size--;

        node *a = head;
        int current_index = 0;

        while (current_index != (index - 1))
        {
            a = a->nxt;
            current_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
    }

    void reverseList(node* a){
        if(a==NULL){
            return;
        }
        reverseList(a->nxt);
        cout<<a->data<<" ";
    }

    void reversePrint(){
        reverseList(head);
        cout<<endl;
    }

    void deleteZeros(){
        node* a=head;
        int current_index=0;
        while(current_index!=size-1){
            if(current_index==0 && a->data==0){
                head=a->nxt;
                delete a;
            }
            a=a->nxt;
            current_index++;
        }
    }

    int get_size()
    {
        return size;
    }

    int search_for_distinct_value(int value)
    {
        node *a = head;
        int index = 0;

        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    void insert_after_value(int value,int data){
        node* a=head;

        while(a!=NULL){
            if(a->data == value){
                break;
            }
            a=a->nxt;
        }
        if(a==NULL){
            cout<<"The value does not exist"<<endl;
        }
        size++;
        node* newNode=createNode(data);
        newNode->nxt=a->nxt;
        a->nxt=newNode;
    }

    void insert_at_tail(int value){
        node* a=createNode(value);
        if(head==NULL){
            head=a;
            return;
        }
        node* temp=head;
        while(temp->nxt!=NULL){
            temp=temp->nxt;
        }
        temp->nxt=a;
    }

    void sort_list(){
        
    }

    void traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout<< endl;
    }
};

int main()
{
    LinkedList l;
    // l.insert_at_head(10);
    // l.insert_at_head(20);
    // l.insert_at_head(50);
    // l.insert_at_head(40);
    // l.insert_at_head(30);
    l.insert_at_tail(0);
    l.insert_at_tail(2);
    l.insert_at_tail(3);
    l.insert_at_tail(4);
    l.insert_at_tail(5);
    //l.insert_at_any_index(1,100);
    // l.insert_after_value(10,100);
    l.traverse();
    l.deleteZeros();
    l.traverse();
     //l.reversePrint();
     //cout<<l.get_size();
    // l.delete_any_index(2);
    // l.traverse();
    // cout << l.get_size();
    //cout<<l.search_for_distinct_value(20);
}