#include <bits/stdc++.h>
using namespace std;
long long duration(vector<int> &p, int k)
{
    long long ans = 0;
    for (int i = 0; i < p.size(); i++)
    {
        ans += (p[i] / k) + (p[i] % k != 0);
    }
    return ans;
}

int solve(int num_p, int h)
{
    vector<int> p(num_p);
    for (int i = 0; i < num_p; i++)
    {
        int temp;
        cin >> temp;
        p[i] = temp;
    }
    int left = 1;
    int right = *max_element(p.begin(), p.end());
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (duration(p, mid) <= h)
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return left;
}

int main()
{
    int num_p, h;
    cin >> h >> num_p;
    int result = solve(num_p, h);
    cout << result << endl;
    return 0;
}