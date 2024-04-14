#include <bits/stdc++.h>
using namespace std;
int calcMax(vector<int> &arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        maxi = max(maxi, arr[i]);
    return maxi;
}

int solve(vector<int> &arr, int hourly)
{
    int total_h = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        total_h += ceil((double)(arr[i]) / (double)(hourly));
    return total_h;
}
int minorange(vector<int> arr, int h)
{
    int left = 1;
    int right = calcMax(arr);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int total_h = solve(arr, mid);
        if (total_h <= h)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr(b);
    for (int i = 0; i < b; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int ans = minorange(arr, a);
    cout << ans;
    return 0;
}
