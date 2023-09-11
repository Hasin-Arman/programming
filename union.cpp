#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> v(n);
    set<int> st1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        st1.insert(v[i]);
    }
    cin >> m;
    vector<int> x(m);
    set<int> st2;
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        st2.insert(x[i]);
    }
    set<int> st3;
    for (auto it = st1.begin(); it != st1.end(); it++)
    {
        st3.insert(*it);
    }

    for (auto it2 = st2.begin(); it2 != st2.end(); it2++)
    {
        st3.insert(*it2);
    }

    for (auto x : st3)
    {
        cout << x << " ";
    }
}