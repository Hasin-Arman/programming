#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >>k;
        map<int,int>position;
        for (int i=1;i<=n;i++){
            int num;
            cin >> num;
            position[num]=i;
        }
        int cnt = 0;
        for (auto val :position){
            int current_pos,correct_pos;
            current_pos=val.second;
            correct_pos=val.first;
            if(abs(current_pos-correct_pos)% k!=0){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<0<<endl;
        }
        else if(cnt==2){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}