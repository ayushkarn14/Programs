#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    vector<int> v;
    cin >> a >> b;
    for (int i = 1; i <= max(a, b); i++)
    {
        v.push_back((a * i) / __gcd(a, i) - __gcd(b, i));
    }
    int c = 1;
    for (auto i : v)
    {
        cout << c++ << ":" << i << " ";
    }
}