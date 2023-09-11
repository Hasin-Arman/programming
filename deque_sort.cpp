#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int> d;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++){
        cin >>v[i];
    }
    for(int i = 0; i <n;i++){
        d.push_back(v[i]);
    }
    vector<int> tmp;
    while(!d.empty()){
        if(d.front()>d.back()){
            tmp.push_back(d.back());
            d.pop_back();
        }
        else{
            tmp.push_back(d.front());
            d.pop_front();
        }
    }
      for(int i = 0; i <n; i++){
        cout<<tmp[i]<<" ";
    }
}