#include <bits/stdc++.h>
using namespace std;
template<class T>
class Queue
{
public:
    T *a;
    int array_capacity;
    int l, r;
    int sz;

    Queue()
    {
        a=new T[1];
        array_capacity=1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void remove_circular(){
        T *temp=new T[array_capacity*2];
        int idx=0;	
        for(int i=l;i<array_capacity;i++){
            temp[idx]=a[i];
            idx++;
        }
        for(int i=0;i<=r;i++){
            temp[idx]=a[i];
            idx++;
        }
        swap(temp,a);
        l=0;
        r=array_capacity-1;
        delete[] temp;
    }

    void increase_size(){
        if(l>r){
            remove_circular();
        }
        T *temp=new T[array_capacity*2];
        for(int i=0;i<array_capacity;i++){
            temp[i]=a[i];
        }
        swap(temp,a);
        delete[] temp;
        array_capacity=array_capacity*2;


    }

    void enqueue(T val)
    {
        if (sz==array_capacity)
        {
            increase_size();
        }
        r++;
        if (r == array_capacity)
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
        if(l==array_capacity){
            l=0;
        }
        sz--;
    }

    T front()
    {
        if (sz==0)
        {
            cout << "queue is empty" << endl;
            T a;
            return a;
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
    Queue<int> q;  
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