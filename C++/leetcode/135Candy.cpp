#include <bits/stdc++.h>
using namespace std;
int candy(vector<int> &ratings)
{
    vector<int> candies(ratings.size(), 1);
    int size = ratings.size();
    int ans = size;
    for (int i = 0; i < size; i++)
    {
        if (size == 1)
        {
            return ans;
        }
        else if ((i == 0 && ratings[0] > ratings[1]) || (i == size - 1 && (ratings[i] > ratings[i - 1])) || !(ratings[i] < ratings[i - 1] || ratings[i] < ratings[i + 1]))
        {
            candies[i]++;
            ans++;
        }
    }
    // for (int i : candies)
    //     cout << i << " ";
    return ans;
}
int main()
{
    vector<int> ratings({1, 2, 2});
    cout << candy(ratings);
}