#include <bits/stdc++.h>
#include "StackLL.cpp"
using namespace std;
int pre(char a)
{
    if (a == '-' || a == '+')
        return 1;
    else
        return 2;
}
string infixtopostfix(string s)
{
    if (s.length() == 0)
        return s;
    stack<char> st;
    string expression = "";
    for (int i = 0; i < s.length(); i++)
    {
        char c = s.at(i);
        // cout << i << " ";
        // cout << c << " ";
        if (c == '(')
            st.push('(');
        else if (c <= '9' && c >= '0')
            expression += c;
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                expression += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                while (!st.empty() && st.top() != '(' && pre(st.top()) >= pre(c))
                {
                    expression += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
    }
    while (!st.empty())
    {
        expression += st.top();
        st.pop();
    }
    return expression;
}
int evaluatepostfix(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s.at(i);
        if (c != '+' && c != '-' && c != '*' && c != '/')
        {
            st.push((int)(c - '0'));
        }
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (c == '+')
                st.push(a + b);
            if (c == '-')
                st.push(a - b);
            if (c == '*')
                st.push(a * b);
            if (c == '/')
                st.push(a / b);
        }
        stack<int> t = st;
        while (!t.empty())
        {
            cout << t.top();
            t.pop();
        }
        cout << endl;
    }
    return st.top();
}
int main()
{
    vector<string> test_cases = {
        "",           // Empty input
        "5",          // Single operand
        "3+2",        // Single operator with two operands
        "3+2*4-1",    // Complex expression with multiple operators
        "(3+2)*4",    // Expression with parentheses
        "999999999+1" // Large numbers
    };

    for (const string &test_case : test_cases)
    {
        cout << "Testing with input: " << test_case << endl;
        if (test_case.empty())
        {
            cout << "Error: Empty input" << endl;
        }
        else
        {
            try
            {
                string postfix = infixtopostfix(test_case);
                int ans = evaluatepostfix(postfix);
                cout << "Ans = " << ans << endl;
            }
            catch (const exception &e)
            {
                cout << "Error: " << e.what() << endl;
            }
        }
        cout << "------------------------" << endl;
    }

    return 0;
}