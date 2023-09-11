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

            if (largest == idx)
            {
                break;
            }
            swap(a[idx], a[largest]);
            idx = largest;
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

    int getMax()
    {
        if (a.empty())
        {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return a[0];
    }

    int ExtractMax()
    {
        if (a.empty())
        {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        int tmp = a[0];
        Delete(0);
        return tmp;
    }

    void Build_heap_array(vector<int> ara)
    {
        a = ara;
        int n = a.size();
        int leaf_node = (n / 2) - 1;
        for (int i = leaf_node; i >= 0; i--)
        {
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

class Min_heap
{
public:
    Max_heap mx;
    void Insert(int val)
    {
        mx.Insert(-val);
    }

    void min_delete(int idx){
        mx.Delete(idx);
    }

    int getMin(){
        return mx.getMax();
    }

    void print(){
        mx.print();
    }
};

void top_three(int k, vector<int> ara)
{
    Max_heap h;
    h.Build_heap_array(ara);
    for (int i = 0; i < k; i++)
    {
        cout << h.ExtractMax() << " ";
    }
}
int main()
{
    // Max_heap h;
    // int n, k;
    // cin >> n >> k;
    // vector<int> ara(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ara[i];
    // }
    // top_three(k, ara);
    Min_heap m;
    m.Insert(5);
    m.Insert(7);
    m.Insert(9);
    m.Insert(10);
    m.Insert(2);
    m.Insert(1);
    m.print();
    m.min_delete(1);
    m.print();
    cout<<m.getMin();
    return 0;
}