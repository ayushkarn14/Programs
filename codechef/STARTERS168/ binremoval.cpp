#include <bits/stdc++.h>
using namespace std;

int countInversions(const string &s)
{
    int c = 0;
    int num1 = 0;
    for (char c : s)
    {
        if (c == '1')
            num1++;
        else
            c += num1;
    }
    return c;
}

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        int totalInversions = countInversions(s);
        if (k > totalInversions || (x < k && totalInversions % k != 0))
        {
            cout << -1 << endl;
        }
        else
        {
            int minOperations = (totalInversions + (k - 1)) / k;
            cout << minOperations << endl;
        }
    }
}