#include <bits/stdc++.h>
using namespace std;
/*
7
2 0
2 1
3 1
3 2
3 3
5 4
5 5
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v(n, 1);
        int positive = n;
        int negative = 0;
        int total = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            total = (positive * (positive - 1)) / 2 + (negative * (negative - 1)) / 2;
            if (total == k)
            {
                flag = 1;
                break;
            }
            v[i] *= -1;
            positive--;
            negative++;
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (auto i : v)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}