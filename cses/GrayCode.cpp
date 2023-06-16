#include <bits/stdc++.h>
using namespace std;
string dec_to_bin(int n, int num)
{
    // int arr[n] = {0};
    string ans;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        // arr[i] = num % 2;
        ans = (char)(num % 2 + 48) + ans;
        num /= 2;
    }
    return ans;
}
int main()
{
    int n, num;
    cin >> n;
    for (int i = 0; i < pow(2, n); i++)
        cout << dec_to_bin(n, i) << endl;
}