#include <bits/stdc++.h>

using namespace std;
const int Max_size = 100;
class Queue
{
public:
    int a[Max_size];
    int l, r;

    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int val)
    {
        if (r + 1 >= Max_size)
        {
            cout << "queue is full!" << endl;
            return;
        }
        r++;
        a[r] = val;
    }

    void dequeue()
    {
        if (l > r)
        {
            cout << "queue is empty" << endl;
            return;
        }
        l++;
    }

    int front()
    {
        if (l > r)
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        return a[l];
    }

    int size(){
        return r-l+1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size : "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size : "<<q.size()<<"\n";
    return 0;
}