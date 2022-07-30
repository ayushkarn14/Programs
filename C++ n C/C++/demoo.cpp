#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    long long n, k;
    cin>>n>>k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    cout<<(a[min(k, n-1)])<<endl;
    }
 return 0;
}
//4 1 2 3 10 1 2 3 5.....k=3