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
    //complexity:O(n)
    void build_heap_array(vector<int> ara){
        a=ara;
        int n=a.size();
        int non_leaf_node=(n/2)-1;
        for(int i=non_leaf_node; i>=0; i--){
            down_heapify(i);
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
 //complexity:O(nlog(n))
vector<int> heap_sort(vector<int> ara){
    vector<int> tmp;
    Max_heap heap;
    heap.build_heap_array(ara);
    for(int i = 0; i < ara.size(); i++){
        tmp.push_back(heap.ExtractMax());
    }
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

int main()
{
    Max_heap heap;
    vector<int> a={1,2,3,4,10,9,8,7};
    // heap.build_heap_array(a);
    // heap.print();
    vector<int> sorted=heap_sort(a);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}