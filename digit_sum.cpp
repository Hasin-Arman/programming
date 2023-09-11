#include<bits/stdc++.h>
using namespace std;
int dig_count(int x){
    int count=0;
    while (x!=0)
    {
        x=x/10;
        count++;
    }
    return count; 
}
int digitSum(int num){
    if(dig_count(num)==1){
        return num;
    }
    return digitSum(num/10)+(num%10);
}

int main(){
    int n;
    cin>>n;
    int tmp=digitSum(n);
    cout<<tmp;
}