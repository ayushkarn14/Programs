#include <bits/stdc++.h>
using namespace std;
long long main()
{
    long long t;
    cin >> t;
    for (long long test_case = 0; test_case < t; test_case++)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> v;
        long long temp;
        for (long long i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        for (long long i = 0; i < n; i++)
        {
            v[i] = v[i] + x * i;
        }
        long long maxi = -long long_MAX;
        for (long long i = 0; i < n; i++)
        {
            maxi = max(maxi, v[i]);
        }
        cout << maxi << endl;
    }
}