#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int dp[505][505];
   int solve(int idx, int time, vector <int>& v){
      if(idx == v.size()) return 0;
      if(dp[idx][time] != -1) return dp[idx][time];
      int ret = INT_MIN;
      ret = max(solve(idx + 1, time, v), v[idx] * time + solve(idx
      + 1, time + 1, v));
      return dp[idx][time] = ret;
   }
   int maxSatisfaction(vector<int>& v) {
      memset(dp, -1, sizeof(dp));
      sort(v.begin(), v.end());
      return solve(0, 1, v);
   }
};
int main(){
   Solution ob;
   int n;
   cin>>n;
   vector<int> v;
   int temp;
   for(int i=0; i<n; i++){
    cin>>temp;
    v.push_back(temp);
   }
   cout << (ob.maxSatisfaction(v));
   return 0;
}