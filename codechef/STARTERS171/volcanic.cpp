#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (long long test_case = 0; test_case < t; test_case++)
    {
        long long n, p;
        cin >> n >> p;
        vector<long long> v;
        long long t;
        for (long long i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        if (n == 1)
        {
            cout << "0" << endl;
            break;
        }
        vector<long long> l(n), r(n);
        // l[0] = v[0];
        long long m = LONG_LONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                m = 0;
                l[i] = 0;
            }
            else if (v[i] <= m)
            {
                l[i] = m;
            }
            else
            {
                m = v[i];
                l[i] = m;
                // l[i] = max(v[i], l[i - 1]);
            }
        }
        m = LONG_LONG_MAX;
        // r[v.size() - 1] = v[v.size() - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 0)
            {
                m = 0;
                r[i] = 0;
            }
            else if (v[i] <= m)
            {
                r[i] = m;
            }
            else
            {
                m = v[i];
                r[i] = m;
            }
        }

        // for (auto i : l)
        //     cout << i << " ";
        // cout << endl;
        // for (auto i : r)
        //     cout << i << " ";

        for (int i = 0; i < n; i++)
        {
            cout << ceil((double)min(l[i], r[i]) / p) << " ";
        }
        cout << endl;
    }
}