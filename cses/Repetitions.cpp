#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char prev = s.at(0);
    int max = 1;
    int curr = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (prev == s[i])
            curr++;
        else
        {
            prev = s[i];
            curr = 1;
        }
        if (curr > max)
            max = curr;
    }
    cout << max;
}