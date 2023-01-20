#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int loop_var = 0; loop_var < t; loop_var++)
    {
        int n, k;
        cin >> n >> k;
        int a = 1;
        int cons = 0;
        int naps = 0;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            int a = str.at(i) - 48;
            if (a == 1)
                cons = 0;
            if (a == 0)
                cons++;
            if (cons == k)
            {
                naps++;
                cons = 0;
            }
        }
        cout << naps << endl;
    }
}