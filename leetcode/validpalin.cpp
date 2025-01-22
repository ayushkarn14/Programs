#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int l = 0;
    // cout << r << endl;
    string lowered = "";
    for (char c : s)
        lowered += tolower(c);
    s = lowered;
    lowered = "";
    for (char c : s)
    {
        if ((c <= 'z' && c >= 'a') || (c <= '9' && c >= '0'))
            lowered += c;
    }
    // cout << lowered << endl;
    s = lowered;
    int r = s.length() - 1;
    while (l < r)
    {
        // cout << l << " " << r << endl;
        if (s[l] != s[r])
        {
            // cout << l << " + " << r << endl;
            return false;
        }
        else
        {
            r--;
            l++;
            // cout << r << " - " << l << endl;
        }
    }
    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
}