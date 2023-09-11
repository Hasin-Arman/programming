#include <bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node *nxt;
};
template<class T>
class LinkedList
{
public:
    node<T> *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    node<T> *createNode(T value)
    {
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void insert_at_head(T value) 
    {
        size++;
        node<T> *a = createNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void delete_head()
    {
        size--;
        node<T> *a = head;
        if (head == NULL)
        {
            return;
        }
        head = a->nxt;
        delete a;
    }

    int get_size()
    {
        return size;
    }

};
 
template<class T>
class Stack{
public:
        LinkedList<T> l;

        void push(T val){
           l.insert_at_head(val);
        }

        void pop(){
            if(l.get_size()==0){
                cout<<"stack is empty"<<endl;
                return;
            }
            l.delete_head();
        }

        T top(){
             if(l.get_size()==0){
                cout<<"stack is empty"<<endl;
                T a;
                return a;
            }
            return l.head->data;
        }
};
    int main()
    {
        Stack<double> s;
        s.push(1.8);
        cout << s.top() << endl;
        s.push(2.1);
        cout << s.top() << endl;
        s.push(3.2);
        cout << s.top() << endl;
        s.push(4.6);
        s.pop();
        cout << s.top();
    }