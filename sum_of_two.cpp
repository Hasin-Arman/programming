#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int main(){
    int n,t;
    int ara[N];
    cin >> n >> t;
    for(int i=1; i<=n; i++){
        cin >> ara[i];
    }
    int ans=0,ans1=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(ara[i]+ara[j]==t){
                ans=j;
                ans1=i;
                break;
            }
        }
    }
    if(ans==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<ans<<" "<<ans1<<endl;
    }
    
}