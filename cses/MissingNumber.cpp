#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long arr[n - 1];
    for (long i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    bool is_last = true;
    long expected = 1;
    for (long i = 0; i < n - 1; i++)
    {
        if (arr[i] != expected)
        {
            cout << expected;
            is_last = false;
            break;
        }
        expected++;
    }
    if (is_last)
        cout << n;
}