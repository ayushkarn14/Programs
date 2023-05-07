#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int x;
        cin >> x;
        int c = 100 - x;
        cout << round(c / 10) * 10 << endl;
    }
}