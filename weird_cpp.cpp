#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int n;
    cin>>n;
    cout<<n<<" ";
    do{
        if(n%2==0){
            n=n/2;
            cout<<n;
            cout<<" ";
        }
        else{
            n=n*3+1;
            cout<<n;
            cout<<" ";
        }
    }while(n!=1);


}
