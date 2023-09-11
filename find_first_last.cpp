#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    vector<int> ans(2);
    int target = 8;
    int low = 0;
    int high = nums.size() - 1;
    int first_index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first_index = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
    }
    ans[0] = first_index;
    low = 0;
    high = nums.size() - 1;
    int last_index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last_index = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
    }
    ans[1] = last_index;
}