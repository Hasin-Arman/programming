#include <bits/stdc++.h>

using namespace std;

vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }
    int pivot = rand() % (a.size());
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }
        if (a[i] <= a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }

    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;

    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);

    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> sorted_a = quick_sort(a);
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted;
    int max_value = max(n, m);
    int min_value = min(n, m);
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < max_value; i++)
    {
        if (sorted_a[idx1] == sorted_b[idx2])
        {
            count++;
            idx1++;
        }
        idx2++;
    }
    if (count == min_value)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}