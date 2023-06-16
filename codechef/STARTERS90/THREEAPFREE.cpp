#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;
        int arr[n][n] = {-1};
        int inp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                arr[i][j] == inp[j] - inp[i];
            }
        }
        bool nope = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int key = arr[i][j];
                for (int k = i + 1; k < n; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        if (key == arr[k][l])
                        {
                            cout << key << "NO\n";
                            nope = true;
                        }
                    }
                }
            }
        }
        if (!nope)
            cout << "YES\n";
    }
}