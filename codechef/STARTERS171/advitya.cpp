#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        string s;
        cin >> s;
        int ans = 0;
        string t = "ADVITIYA";
        int i = 0;
        for (char c : s)
        {
            int temp = t[i++] - c;
            if (temp < 0)
                temp += 26;
            ans += temp;
        }
        cout << ans << endl;
    }
}