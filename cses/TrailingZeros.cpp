#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int ans;
    int i = 1;
    int sum = 0;
    do
    {
        ans = n / pow(5, i);
        i++;
        sum += ans;
    } while (ans != 0);
    cout << sum;
}