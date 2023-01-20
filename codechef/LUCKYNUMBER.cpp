#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, b, a;
        cin >> n >> b >> a;
        int arr[n];
        int cb = 0, ca = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % b == 0)
            {
                cb++;
                arr[i] = -1;
            }
            if (arr[i] % a == 0)
                ca++;
        }
        if (cb > ca)
            cout << "BOB" << endl;
        else
            cout << "ALICE" << endl;
    }
}