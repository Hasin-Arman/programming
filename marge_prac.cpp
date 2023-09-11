#include <bits/stdc++.h>
using namespace std;
int n, k;
bool found = false;
vector<int> merge_sort(vector<int> v)
{
    // base case
    if (v.size() <= 1)
    {
        return v;
    }
    int mid = v.size() / 2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < mid; i++)
    {
        a.push_back(v[i]);
    }
    for (int i = mid; i < v.size(); i++)
    {
        b.push_back(v[i]);
    }
    vector<int> sorted_a = merge_sort(a);
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (idx1 == sorted_a.size())
        {
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_b.size())
        {
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if (sorted_a[idx1] < sorted_b[idx2])
        {
            sorted_c.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if (sorted_b[idx2] < sorted_a[idx1])
        {
            sorted_c.push_back(sorted_b[idx2]);
            idx2++;
        }
    }
    if (sorted_c.size() == n)
    {
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            if (sorted_c[i] + sorted_c[j] < k)
            {
                i++;
            }
            else if (sorted_c[i] + sorted_c[j] > k)
            {
                j--;
            }
            else
            {
                found = true;
                break;
            }
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    vector<int> ans=merge_sort(a);
    if (found)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    return 0;
}
