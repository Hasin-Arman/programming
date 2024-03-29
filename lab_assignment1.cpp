#include<bits/stdc++.h>

using namespace std;

vector<int> quick_sort(vector<int>a){

    if(a.size()<=1){
        return a;
    }

    int pivot = rand() % a.size();
    vector<int>b,c;

    for(int i=0;i<a.size();i++){
        if(i==pivot){
            continue;
        }

        else if(a[i]<=a[pivot]){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }

    vector<int> sorted_b=quick_sort(b);
    vector<int> sorted_c=quick_sort(c);

    vector<int> sorted_a;

    for(int i=0; i<sorted_b.size(); i++){
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);

    for(int i=0; i<sorted_c.size(); i++){
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;

}

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }   
    vector<int>sorted_a = quick_sort(a);
    
    for(int i=sorted_a.size()-1;i>=0;i--)
    {
        cout<<sorted_a[i]<<" ";
    }
    return 0;
}