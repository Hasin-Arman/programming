#include <bits/stdc++.h>
using namespace std;
template <class T>
class Min_Heap
{
public:
    vector<T> a;

    void up_heapify(int idx)
    {
        while (idx > 0 && a[idx] < a[(idx - 1) / 2])
        {
            swap(a[idx], a[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }
    void Insert(T val)
    {
        a.push_back(val);
        up_heapify(a.size() - 1);
    }

    void down_heapify(int idx)
    {
        while (1)
        {
            int smallest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if(l<a.size() && a[smallest]>a[l]){
                smallest=l;
            }

             if(r<a.size() && a[smallest]>a[r]){
                smallest=r;
            }
            if(smallest==idx){
                break;
            }
            swap(a[idx],a[smallest]);
            idx=smallest;
        }
    }

    void Delete(int idx)
    {
        if (idx >= a.size())
        {
            return;
        }
        swap(a[idx], a[a.size() - 1]);
        a.pop_back();
        down_heapify(idx);
    }

    T getMin(){
        if(a.empty()){
            T a;
            return a;
        }
        return a[0];
    }

    T ExtractMin(){
         if(a.empty()){
            T a;
            return a;
        }
        T tmp=a[0];
        Delete(0);
        return tmp;
    }

    int getSize(){
        return a.size();
    }

    void heap_sort(){
        vector<T> tmp;
        vector<int> ara=a;
        for(int i=0;i<ara.size();i++){
            tmp.push_back(ExtractMin());
        }
       for(int i=0;i<tmp.size();i++){
        cout<<tmp[i]<<" ";
       }
    }


    void print()
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
};
template<class T>
class Priority_Queue{
public:
    Min_Heap<int> h;
    void push(T value){
        h.Insert(-value);
    }

    void pop(){
        h.Delete(0);
    }

    T top(){
        return -1*h.getMin();
    }

    int Size(){
        return h.getSize();
    }
};
int main()
{

    Priority_Queue<int> p;
    p.push(1);    
    p.push(3);    
    p.push(5);    
    p.push(6);    
    p.push(9);    
    p.push(8);    
    p.push(10);   
    p.pop();
    cout<<p.top()<<endl;
    while(p.Size() > 0){
        cout<< p.top()<<" ";
        p.pop();
    } 
    // Min_Heap<int> h;
    // h.Insert(1);
    // h.Insert(3);
    // h.Insert(4);
    // h.Insert(6);
    // h.Insert(8);
    // h.Insert(0);
    // h.print();
    // h.heap_sort();  
    // // cout<<h.getMin()<<" "<<"\n";
    // // h.Delete(0);
    // // h.print();
    // // cout<<h.getMin()<<" ";
    // // cout<<h.ExtractMin()<<"\n";
    // // cout<<h.ExtractMin()<<"\n";
    // // vector<int> sorted=h.heap_sort();
    // // for(int i=0; i<sorted.size(); i++){
    // //     cout<<sorted[i]<<" ";
    // // }
}