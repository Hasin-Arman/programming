#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        int sum2 = 0;
        if (l < r)
        {
            for (int i = l; i <= r; i++)
            {
                sum += i;
            }
            cout << sum << endl;
        }

        else
        {
            for (int j = l; j >= r; j--)
            {
                sum2 += j;
            }
            cout << sum2 << endl;
        }
    }
}