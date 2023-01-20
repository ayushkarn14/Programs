// wrong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                c++;
            int i, j;
            for (i = l; i < r; i++)
            {
                if (s[i] == s[r])
                    break;
            }
            for (j = r; j > l; j--)
            {
                if (s[j] == s[l])
                    break;
            }
            if (i == j)
                break;
            if (i - l < r - j)
                l = i;
            else
                r = j;
        }
        cout << c << endl;
    }
}