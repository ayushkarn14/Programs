#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    int j = 1;
    int s = n / 2;
    if (n % 2 == 0)
        s = n / 2 - 1;
    for (int i = s; i >= 0; i--)
    {
        arr[i] = j;
        j += 2;
    }
    if (n == 1)
        return 0;
    j = 2;
    for (int i = n - 1; i > s; i--)
    {
        arr[i] = j;
        j += 2;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}