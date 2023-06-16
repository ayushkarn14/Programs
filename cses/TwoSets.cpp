#include <bits/stdc++.h>
#define loop(i, n) for (long i = 0; i < n; i++)
using namespace std;
int main()
{
    long n;
    cin >> n;
    set<long> set1;
    set<long> set2;
    long sum1 = 0;
    long sum2 = 0;
    for (long i = n; i >= 1; i--)
    {
        // cout << sum1 << ", " << sum2 << endl;
        if (sum1 <= sum2)
        {
            sum1 += i;
            set1.insert(i);
        }
        else
        {
            sum2 += i;
            set2.insert(i);
        }
    }
    if (sum1 == sum2)
    {
        cout << "YES\n";
        cout << set1.size() << endl;
        for (long i : set1)
            cout << i << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (long i : set2)
            cout << i << " ";
    }
    else
    {
        cout << "NO\n";
    }
}