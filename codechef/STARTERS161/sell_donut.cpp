#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    // 5 2 3 1
    // 2 2 1 4 3
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> d;
        vector<int> c;
        d.push_back(0);
        c.push_back(0);
        for (int i = 0; i < a; i++)
        {
            int inp;
            cin >> inp;
            d.push_back(inp);
        }
        for (int i = 0; i < b; i++)
        {
            int inp;
            cin >> inp;
            c.push_back(inp);
        }
        int sad = 0;
        for (int i = 1; i <= b; i++)
        {
            if (c[i] > a)
            {
                sad++;
            }
            else if (d[c[i]] > 0)
            {
                d[c[i]]--;
            }
            else
            {
                sad++;
            }
        }
        cout << sad << endl;
    }
}