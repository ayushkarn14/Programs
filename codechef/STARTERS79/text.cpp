#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int p, k, q, t;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> p >> k;
        int sum = 0;
        for (int j = p; j <= k; j++)
        {
            cin >> t;
            sum += j * t;
        }
        cout << sum << endl;
    }
}