#include<bits/stdc++.h>
using namespace std;
int idx=0;
int maximum=0;
int find_max(vector<int> v){
    int last=v.size();
    if(idx<last){
        if(maximum<v[idx]){
            maximum=v[idx];
        }
        idx++;
        find_max(v);
    }
    return maximum;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    int max_value=find_max(v);
    cout<<max_value<<endl;
}