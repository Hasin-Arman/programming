#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v[4];
    int ara[4][4] = {};
    v[0] = {1};
    v[1] = {0, 2};
    v[2] = {3, 1};
    v[3] = {1, 2};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
                ara[i][v[i][j]] = 1;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ara[i][j] << " ";
        }
        cout << "\n";
    }
}