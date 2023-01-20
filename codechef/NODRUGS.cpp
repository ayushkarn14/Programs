#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        float n, k, l, s, max = 0;
        cin >> n >> k >> l;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> s;
            max = (max < s) ? s : max;
        }
        // cout << "Max=" << max << endl;
        cin >> s;
        if (max < s)
            cout << "Yes" << endl;
        else if (k < 0)
            cout << "No" << endl;
        else
        {
            float diff = max - s;
            if (diff / k >= l - 1)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}