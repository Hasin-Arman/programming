#include <bits/stdc++.h>

using namespace std;
const int Max_size = 5;
class Queue
{
public:
    int a[Max_size];
    int l, r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int val)
    {
        if (sz==Max_size)
        {
            cout << "queue is full!" << endl;
            return;
        }
        r++;
        if (r== Max_size)
        {
            r = 0;
        }
        a[r] = val;
        sz++;
    }

    void dequeue()
    {
        if (sz==0)
        {
            cout << "queue is empty" << endl;
            return;
        }
        l++;
        if(l==Max_size){
            l=0;
        }
        sz--;
    }

    int front()
    {
        if (sz==0)
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
    }
};
int main()
{
    
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    cout<<"Q size : "<<q.size()<<"\n";
    q.dequeue();
    q.dequeue();
    q.dequeue();
 

    q.enqueue(10);
    q.dequeue();
    q.dequeue();
    cout<<q.front()<<"\n";

    cout<<"Q size : "<<q.size()<<"\n";
    return 0;
}