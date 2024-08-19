#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> pre_prod(nums.size());
    vector<int> post_prod(nums.size());
    pre_prod[0] = nums[0];
    post_prod[nums.size() - 1] = nums[nums.size() - 1];
    for (int i = 1; i < nums.size(); i++)
    {
        pre_prod[i] = pre_prod[i - 1] * nums[i];
    }
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        post_prod[i] = post_prod[i + 1] * nums[i];
    }
    cout << "Pre_prod: ";
    for (int i : pre_prod)
        cout << i << " ";
    cout << "Post_prod: ";
    for (int i : post_prod)
        cout << i << " ";
    vector<int> ans;
    ans.push_back(post_prod[1]);
    for (int i = 1; i < nums.size() - 1; i++)
    {
        ans.push_back(pre_prod[i - 1] * post_prod[i + 1]);
    }
    ans.push_back(pre_prod[nums.size() - 2]);
    return ans;
}
int main()
{
    vector<int> arg{1, 2};
    auto ans = productExceptSelf(arg);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    // cout << "Hello";
    return 0;
}

// 1  2  6  24
// 24 24 12 4
//