#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int size = gas.size();
    vector<int> diff;
    for (int i = 0; i < size; i++)
        diff.push_back(gas[i] - cost[i]);
    // for (int i : diff)
    //     cout << i << " ";
    // cout << endl;
    int total = 0, ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (diff[i] < 0)
            continue;
        for (int j = 0; j < size; j++)
        {
            // i+j mod size will give now index
            total += diff[(i + j) % size];
            if (total < 0)
                break;
            // cout << " total -> " << total << i << " ";
            if (i != (i + j) % size)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> gas{2, 3, 4};
    vector<int> cost{3, 4, 3};
    // diff -1 -1 1
    int ans = canCompleteCircuit(gas, cost);
    cout << "ans -> " << ans;
}