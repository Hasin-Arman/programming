#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 5;
    int low = 0;
    int index = -1;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == target)
        {
            index = mid;
            break;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
    }

    cout<<index<<"\n";
}