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

    int getSize(){
        return a.size();
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
 //priority queue built from scratch
class Priority_Queue{
public:
    Max_heap h;
    void push(int x){
        h.Insert(x);
    }
    void pop(){
        h.Delete(0);
    }

    int top(){
        return h.getMax();
    }

    int size(){
        return h.getSize();
    }
};

int digit(int val){
    int dig_count=0;
    while(val!=0){
        val = val/10;
        dig_count++;
    }
}

int main()
{
    // priority queue using STL
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    priority_queue<int> p1;
    priority_queue<int> p2;

    for(int i=0;i<n; i++){
        p1.push(a[i]);
        p2.push(b[i]);
    }
    int ans=0;
    while(p1.size()>0){
        int x=p1.top();
        int y=p2.top();

        if(x==y){
            p1.pop();
            p2.pop();
            continue;
        }
        ans++;
        if(x>y){
            p1.push(digit(x));
            p1.pop();
        }
        else{
            p2.push(digit(y));
            p2.pop();
        }
    }
    cout<<"Number of operations needed:"<<ans<<"\n";
}