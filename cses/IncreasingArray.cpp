#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long curr = 0;
    cin >> curr;
    long ans = 0;
    for (int i = 1; i < n; i++)
    {
        int inp;
        cin >> inp;
        if (inp < curr)
        {
            ans = ans + curr - inp;
        }
        else
            curr = inp;
    }
    cout << ans;
}