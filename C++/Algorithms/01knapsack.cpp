#include <bits/stdc++.h>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
    int K[n + 1][W + 1];

    // Build table K[][] in bottom up manner
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                K[i][j] = 0;
            else if (wt[i - 1] <= j)
                K[i][j] = max(val[i - 1] + K[i - 1][j - wt[i - 1]], K[i - 1][j]);
            else
                K[i][j] = K[i - 1][j];
        }
    }
    return K[n][W];
}
int main()
{
    cout << "Enter weight capacity : ";
    int w;
    cin >> w;
    cout << "Enter number of items : ";
    int n;
    cin >> n;
    int wt[n];
    int val[n];
    cout << "Enter " << n << " value and weights \n";
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wt[i];
    }
    int ans = knapSack(w, wt, val, n);
    cout << "Max value = " << ans;
}