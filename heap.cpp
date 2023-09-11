#include <bits/stdc++.h>
using namespace std;
class Max_heap
{
public:
    vector<int> a;
    void up_heapify(int idx)
    {
        while (idx > 0 && a[idx] > a[(idx - 1) / 2])
        {
            swap(a[idx], a[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void Insert(int value)
    {
        a.push_back(value);
        up_heapify(a.size() - 1);
    }

    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int l = 2 * idx + 1;
            int r = 2 * idx + 2;
            if (l < a.size() && a[largest] < a[l])
            {
                largest = l;
            }

            if (r < a.size() && a[largest] < a[r])
            {
                largest = r;
            }

            if(largest == idx){
                break;
            }
            swap(a[idx], a[largest]);
            idx=largest;
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

    int getMax(){
        if(a.empty()){
            cout<<"Heap is empty!"<<endl;
            return -1;
        }
        return a[0];
    }

    int ExtractMax(){
         if(a.empty()){
            cout<<"Heap is empty!"<<endl;
            return -1;
        }
        int tmp= a[0];
        Delete(0);
        return tmp;
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
int main()
{
    Max_heap heap;
    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.Insert(20);
    heap.Insert(30);
    // heap.print();
    // heap.Delete(0);
    // heap.print();
     cout<<"Max element = "<<heap.getMax()<<"\n";
//    heap.PrintHeap();

    cout<<"Max element = "<<heap.ExtractMax()<<"\n";
    cout<<"Max element = "<<heap.ExtractMax()<<"\n";
    return 0;
}