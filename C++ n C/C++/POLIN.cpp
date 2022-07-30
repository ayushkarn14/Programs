#include <bits/stdc++.h>
using namespace std;
int distinct(int* arr, int len)
{
    set<int> S;
    for (int i = 0; i < len; i++) {
        S.insert(arr[i]);
    }
    int ans = S.size();
    return ans;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int x[n];
        int y[n];
        for(int j=0;j<n;j++){
            cin>>x[j];
            cin>>y[j];
        }
        cout<<(distinct(x,n)+distinct(y,n))<<endl;
    }
}