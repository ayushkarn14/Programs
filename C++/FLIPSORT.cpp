#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string s;
    for (int u = 0; u < t; u++)
    {
        cin >> n;
        cin >> s;
        char f = s[0];
        char l = s[n - 1];
        vector<int> cum;
        int cumsize = 1;
        char prev = s[0];
        cum.push_back(1);
        string sub = s.substr(1, n - 1);
        // cout << sub << endl;
        for (char i : sub)
        {
            if (prev == i)
            {
                cum[cumsize - 1] = cum[cumsize - 1] + 1;
            }

            else
            {
                prev = i;
                cum.push_back(1);
                cumsize++;
            }
        }
        int cc = 0;
        cout<<cumsize-1<<endl;
        for (int j = 0; j < cumsize - 1; j++)
        {
            cc = cum[j] + cc;
            cout << 1 << " " << cc << endl;
        }
    }
}