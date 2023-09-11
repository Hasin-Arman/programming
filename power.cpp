#include<bits/stdc++.h>
using namespace std;
int power(int x, int y){
    if(y ==1){
        return x;
    }
    y--;
    return power(x,y) * x;
}
int main(){
    int n,m;
    cin >> n >> m;
    int result=power(n,m);
    cout << result << endl;
}