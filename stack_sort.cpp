#include <bits/stdc++.h>

using namespace std;
template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};
template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    void deleteHead()
    {
        node<T> *a = head;
        if (head == NULL)
        {
            return;
        }
        sz--;
        head = a->nxt;
        delete a;
    }
};
template <class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    int getSize()
    {
        return dl.getSize();
    }

    void pop()
    {
        if (dl.getSize() == 0)
        {
            cout << "can't pop"
                 << "\n";
            return;
        }
        dl.deleteHead();
    }

    T top()
    {
        if (dl.getSize() == 0)
        {
            cout << "stack is empty"
                 << "\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
};

int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(6);

    Stack<int> tmp;
    while (s.getSize() > 0)
    {
        int t = s.top();
        s.pop();
        while (tmp.getSize() > 0)
        {
            if (tmp.top() < t)
            {
                break;
            }
            s.push(tmp.top());
            tmp.pop();
           
        }
        tmp.push(t);
    }
    swap(s, tmp);

    while (s.getSize() > 0)
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}