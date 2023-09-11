#include<bits/stdc++.h>
using namespace std;

/*
    3
 0---->1
    5 / \4
    2--->3
      6
*/

int main(){
    vector<pair<int,int>> v[4];

    v[0]={{1,3},{2,7}};
    v[1]={{2,5}};
    v[2]={{3,6}};
    v[3]={{1,4}};

    for(int i=0; i<4 ; i++){
        cout<<i<<"->";
        for(int j=0; j<v[i].size(); j++){
            cout<<"("<<v[i][j].first<<","<<v[i][j].second<<")";
        }
        cout<<endl;
    }

}