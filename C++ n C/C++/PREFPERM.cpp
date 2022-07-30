#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int arr[k+1];
        int ans[n];
        memset(arr, 0, sizeof(arr));
        memset(ans, 0, sizeof(ans));
        for(int j=1;j<=k;j++)
            cin>>arr[j];
        int c=0;
        for(int j=1;j<=k;j++){
            ans[arr[j]+1]=1+arr[j-1];
            for(int l=arr[j];l>arr[j-1];l--){
                ans[l]=arr[j]-c;
                c--;
            }
        }
        for(int j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }
    }
}