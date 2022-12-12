#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        int q=0;
        cin>>q;
        int o[q];
        for(int j=0;j<q;j++){
            int s=0;
            int r,l;
            cin>>r>>l;
            r--;l--;
            for(int k=r;k<=l;k++)
                s+=arr[k%n];
            o[j]=s;
        }
        for(int j=0;j<q;j++)
            cout<<o[j]<<" ";
        cout<<endl;
    }
}