#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    int max_value = 0;
    for (int i = 1; i < n; i++)
    {
        max_value = max(max_value, v[i]);
    }
    vector<int> ara(max_value + 1);
    for (int i = 1; i <= max_value; i++)
    {
        ara[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        ara[v[i]] += 1;
    }

    for(int i = 1; i <= max_value; i++){
        if(ara[i] == 0){
             cout<<i<<"\n";
             break;
        }
    }
}