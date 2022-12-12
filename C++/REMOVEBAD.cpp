#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        map<int, int> map;
        int n, max = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (map.find(num) == map.end())
                map[num] = 1;
            else
                map[num] = map[num] + 1;
            if (max < map[num])
                max = map[num];
        }
        cout << n - max << endl;
    }
    return 0;
}