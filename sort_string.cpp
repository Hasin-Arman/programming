#include <bits/stdc++.h>
using namespace std;

vector<string> merge_sort(vector<string> v)
{
    // base case
    if (v.size() <= 1)
    {
        return v;
    }
    int mid = v.size() / 2;
    vector<string> a;
    vector<string> b;
    for (int i = 0; i < mid; i++)
    {
        a.push_back(v[i]);
    }
    for (int i = mid; i < v.size(); i++)
    {
        b.push_back(v[i]);
    }
    vector<string> sorted_a= merge_sort(a);
    vector<string> sorted_b= merge_sort(b);
    vector<string> sorted_c;
    int idx1=0;
    int idx2=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(idx1==sorted_a.size()){
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
        else if(idx2==sorted_b.size()){
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if(sorted_a[idx1]<sorted_b[idx2]){
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if(sorted_b[idx2]<sorted_a[idx1]){
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
    }
    return sorted_c;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<string> sorted =merge_sort(a);
    for (int i = 0; i <sorted.size(); i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}
