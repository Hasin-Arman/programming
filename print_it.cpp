#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        if(i==1 || i==(n * 2) - 1){
            cout<<">";
            cout<<endl;
        }
            for (int j = 1; j <= i + 1; j++)
            {
                cout<<"<";
            }
        cout << endl;
    }
}