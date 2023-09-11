#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], x[n + 1];
    for (int i = 1; i <= n-1 ; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        x[i] = 0;
    }

    for (int j = 1; j <= n-1; j++)
    {
        x[v[j]] += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
        {
            cout<<i;
        }
    }

    return 0;
}