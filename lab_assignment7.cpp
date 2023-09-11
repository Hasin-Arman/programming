#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,target;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i <n; i++){
        cin >> v[i];
    }

    cin>>target;

    int low=0;
    int high=v.size()-1;
    int count=0;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(v[mid] == target){
            count++;
            low=mid+1;
        }

       else if(v[mid]<target){
            low=mid+1;
        }

       else if(v[mid]>target){
            high=mid-1;
        }
    }
    if(count>1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}