#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "w", stdout);
    int r, c, q;
    cin >> r >> c >> q;
    int arr[q];
    for (int i = 0; i < q; i++)
        cin >> arr[i];
    int p = 1, k = r;

    for (int j = 0; j < q; j++)
    {
        if (arr[j] > ((c * r * (r + 1)) / 2))
        {
            cout << -1 << endl;
            continue;
        }
        k = r;
        p = 1;
        int ans[r];
        for (int i = 0; i < r; i++)
            ans[i] = c;

        int to_sub = ((c * r * (r + 1)) / 2) - arr[j];
        for (int i = r; i >= 1; i--)
        {
            if (to_sub >= i * c)
            {
                k--;
                to_sub -= i * c;
            }
            else
            {
                ans[i - 1] = c - (to_sub / i);
                to_sub -= i * (to_sub / i);
            }
        }
        int sum = 0;
        for (int i = p; i <= k; i++)
        {
            sum = sum + (i * ans[i - 1]);
        }
        // cout << sum << " <- SUM \n";
        if (sum != arr[j])
        {
            cout << -1 << endl;
            continue;
        }
        cout << p << " " << k << endl;
        for (int i = 0; i < k; i++)
        {
            if (ans[i] != 0)
                cout << ans[i] << " ";
        }
        cout << endl;
    }
}