#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node *next;
};

template <class T>
class Queue
{
public:
    node<T> *head;
    node<T> *tail;
    int size;

    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    node<T> *createNode(T val)
    {
        node<T> *newNode = new node<T>;
        newNode->data = val;
        newNode->next = NULL;
        return newNode;
    }

    void enqueue(T val)
    {
        size++;
        node<T> *newNode = createNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue()
    {
        node<T> *a = head;
        if (size == 0)
        {
            cout << "queue is empty" << endl;
            return;
        }
        if (size == 1)
        {
            delete a;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        size--;
        head = head->next;
        delete a;
    }

    T front()
    {
        if (size == 0)
        {
            cout << "queue is empty" << endl;
            T a;
            return a;
        }
        return head->data;
    }

    int get_size()
    {
        return size;
    }
};
int main()
{
    Queue<char> q;
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');

    cout << "Q size : " << q.get_size() << "\n";
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() << "\n";
    q.dequeue();

    cout << "Q size : " << q.get_size() << "\n";
    return 0;
}