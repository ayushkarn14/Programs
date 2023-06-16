#include <bits/stdc++.h>
using namespace std;

bool findSubsequence(vector<long long> &arr, long long b, long long index, long long ans)
{
    if (ans == b)
        return true;

    if (index >= arr.size())
        return false;

    if (findSubsequence(arr, b, index + 1, ans & arr[index])) // abhi wala rakh ke
        return true;

    if (findSubsequence(arr, b, index + 1, ans)) // abhi wala hata ke
        return true;

    return false;
}

bool existsSubsequence(vector<long long> &arr, long long b)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool res = findSubsequence(arr, b, 0, arr[i]);
        if (res)
            return true;
    }
    return false;
    // return findSubsequence(arr, b, 0, arr[0]);
}

int main()
{
    long long t;
    cin >> t;
    for (long long test_cases = 0; test_cases < t; test_cases++)
    {
        long long n, b;
        cin >> n >> b;

        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool result = existsSubsequence(arr, b);

        if (result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
