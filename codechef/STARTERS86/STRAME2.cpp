#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        int curr;
        int c = 0;
        st.push(int(s[0]) - 48);
        for (int i = 1; i < n; i++)
        {
            curr = int(s[i]) - 48;
            if (!st.empty())
            {
                if (curr != st.top())
                {
                    st.pop();
                    c++;
                }
                else
                    st.push(curr);
            }
            else
                st.push(curr);
        }
        if (c % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
}