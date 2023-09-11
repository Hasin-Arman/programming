#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=1; i<n; i++){
        int indx=i;
        while(indx>=1){
            if(v[indx-1]>v[indx]){
                swap(v[indx-1],v[indx]);
                indx--;
            }
            else{
                break;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }

}