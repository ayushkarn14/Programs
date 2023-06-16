#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (long long test_case = 0; test_case < t; test_case++)
    {
        long long len, k;
        cin >> len >> k;
        long long count = 0;
        long long gap = 0;
        long long ans = 1;
        string s;
        cin >> s;

        for (long long i = 0; i < len; i++)
        {
            char inp;
            inp = s[i];
            if (inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u')
            {

                if (count % k == 0 && count != 0)
                    ans = (ans * (gap + 1)) % (long long)(pow(10, 9) + 7);
                // cout << ans << endl;
                count++;
                gap = 0;
            }
            else if (count % k == 0)
            {
                gap++;
            }
        }
        cout << ans << endl;
    }
}
// 2 babylonian
