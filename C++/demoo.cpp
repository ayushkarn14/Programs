#include <bits/stdc++.h>
using namespace std;

template <typename T>
int bin_search(T *arr, int f, int l, T x)
{
    if (f > l)
        return -1;
    int mid = (f + l) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bin_search(arr, f, mid - 1, x);
    else
        return bin_search(arr, mid + 1, l, x);
}
int main()
{
    float arr[] = {1.2, 2.3, 3.4, 4.5};
    float x = 4.5;
    cout << bin_search<float>(arr, 0, 3, x);
}