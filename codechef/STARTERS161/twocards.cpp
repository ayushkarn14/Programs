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
        vector<int> a(n), b(n);
        int max_a = -1, max_b = -1;
        int ind_max_a = -1, ind_max_b = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (max_a < a[i])
            {
                max_a = a[i];
                ind_max_a = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (max_b < b[i])
            {
                max_b = b[i];
                ind_max_b = i;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == max_b)
                count++;
        }
        if (max_a > max_b)
        {
            cout << "Yes" << endl;
            continue;
        }
        else
        {
            if (max_a == max_b)
            {
                if (ind_max_a == ind_max_b)
                {
                    cout << "Yes" << endl;
                    continue;
                }
                else if (abs(ind_max_a - ind_max_b) > 1)
                {
                    cout << "Yes" << endl;
                    continue;
                }
                else if ((abs(ind_max_a - ind_max_b) == 1) && (ind_max_b == n - 1))
                {
                    cout << "No" << endl;
                    continue;
                }
                else
                {
                    cout << "Yes" << endl;
                    continue;
                }
            }
            else
            {
                if (count == 1)
                {
                    cout << "Yes" << endl;
                    continue;
                }
                else
                {
                    if (ind_max_b == n - 1 && ind_max_b == n - 2)
                    {
                        cout << "No" << endl;
                        continue;
                    }
                    else
                    {
                        cout << "Yes" << endl;
                        continue;
                    }
                }
            }
        }

        return 0;
    }
}