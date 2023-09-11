#include<bits/stdc++.h>

using namespace std;
/*

 0----1
     / \
    2---3

*/

int main(){
    int ara[4][4]={};
    ara[0][1]=1;
    ara[1][0]=1;

    ara[1][2]=1;
    ara[2][1]=1;

    ara[2][3]=1;
    ara[3][2]=1;

    ara[1][3]=1;
    ara[3][1]=1;

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<"\n";
    }
}