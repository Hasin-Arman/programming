#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }

    for(auto it:s){
        cout<<it<<" ";
    }
}