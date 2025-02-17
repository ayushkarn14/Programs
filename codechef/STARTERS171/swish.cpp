#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int k, m;
        string s;
        cin >> m >> k >> s;
        // m->moves made, k->swish needed
        int count = 0;
        for (char c : s)
            if (c == 'S')
                count++;
        if (count >= k)
            cout << m << endl;
        else
        {
            cout << m + (k - count) - 1 << endl;
        }
    }
}