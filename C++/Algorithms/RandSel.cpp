#include <bits/stdc++.h>
using namespace std;
int Lomuto_P(int *a, int f, int l)
{
    int pivot = a[l];
    int i = f - 1;
    for (int j = f; j <= l; j++)
    {
        if (a[j] <= pivot)
        {
            i += 1;
            swap(a[i], a[j]);
        }
    }
    // swap(a[i + 1], a[l]);
    return i;
}
int Randomized_Partition(int a[], int p, int r)
{
    int i = rand() % r + 1; // flag for debugging
    swap(a[i], a[r]);
    return Lomuto_P(a, p, r);
}
int rselect(int *a, int f, int l, int i)
{
    int p, k;
    if (f == l)
        return a[f];
    p = Lomuto_P(a, f, l);
    k = p - f + 1;
    if (i == k)
        return a[p];
    else if (i < k)
        return rselect(a, f, p - 1, i);
    else
        return rselect(a, p + 1, l, i - k);
}
int main()
{
    int n, i, ans;
    cout << "Enter size of the array - " << endl;
    cin >> n;
    int a[n];
    int c = 0;
    cout << "Enter array elements - " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans = rselect(a, 0, n - 1, 3);
    // cout<<n<<"th smallest element = "<<ans<<endl;
    cout << ans;
}