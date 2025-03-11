#include <bits/stdc++.h>
using namespace std;
bool checkEligibility(int age, int height)
{
    if ((age >= 21 && age <= 30) && (height >= 160 && height <= 180))
        return true;
    else
        return false;
}
int main()
{
    vector<pair<int, int>> test{{21, 170}, {22, 170}, {30, 170}, {29, 170}, {25, 160}, {25, 161}, {25, 180}, {25, 179}, {25, 170}};
    vector<bool> expected(9, true);
    int j = 0;
    for (auto i : test)
    {
        bool ans;
        ans = checkEligibility(i.first, i.second);
        if (ans == expected[j])
            cout << "Test passed" << endl;
        else
            cout << "Test failed" << endl;
        j++;
    }
}