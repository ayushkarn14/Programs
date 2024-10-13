#include <bits/stdc++.h>
using namespace std;
vector<int> smallestRange(vector<vector<int>> &nums)
{
    int lowerBound = INT_MAX;
    int n = nums.size();
    for (int i = 0; i < n; i++)
        lowerBound = min(lowerBound, nums[i][nums[i].size() - 1]);
    int upperBound = lowerBound;

    for (int i = 0; i < n; i++)
    {
        int l = 0, h = nums[i].size() - 1;
        int prevMid = 0, ind = 0;
        while (l < h)
        {
            int mid = l + (h - l) / 2;
            if (nums[i][mid] == upperBound)
            {
                ind = mid;
                break;
            }
            else if (nums[i][mid] < upperBound)
            {
            }
        }
    }
}