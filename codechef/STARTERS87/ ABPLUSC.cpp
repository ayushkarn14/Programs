#include <bits/stdc++.h>
using namespace std;
long long previousPerfectSquare(int N)
{
    long long prevN = floor(sqrt(N));
    if (prevN * prevN == N)
        prevN -= 1;

    return prevN * prevN;
}
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        long long x;
        cin >> x;
        long long left = previousPerfectSquare(x);
        long long a = sqrt(left);
        long long c = x - left;
        if (a != 0 && c != 0)
            cout << a << " " << a << " " << c << "\n";
        else
            cout << -1 << endl;
    }
}