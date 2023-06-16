#include <bits/stdc++.h>
using namespace std;
void solve(vector<char> ch, int n)
{
    char temp;
    reverse(ch.begin(), ch.end());
    bool word_reved = false;
    int word_start = 0;
    int space;
    // finding next space
    for (int i = 0; i <= n; i++)
    {
        word_reved = false;
        if (ch[i] == ' ' || i == n)
        {
            space = i;
            // cout << space;
        }
        // cout << word_start;
        for (int j = word_start; j < (word_start + space) / 2; j++)
        {
            cout << j << " , " << space - j + word_start - 1 << endl;
            swap(ch[j], ch[space - j + word_start - 1]);
            word_reved = true;
        }
        if (word_reved)
            word_start = space + 1;
    }
}
int main()
{
    vector<char> ch = {'a', 'y', 'u', 's', 'h', ' ', 'i', 's', ' ', 'a', ' ', 'b', 'o', 'y'};
    int n = sizeof(ch) / sizeof(char);
    solve(ch, n);
    for (int i = 0; i < n; i++)
        cout << ch[i];
}