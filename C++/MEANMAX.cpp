#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int nn;
        cin>>nn;
        int arr[nn];
        for(int j=0;j<nn;j++)
            cin>>arr[j];
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
        double mean=0;
        for(int j=0;j<n-1;j++)
            mean+=arr[j];
        mean/=(n-1);
        //cout<<mean+arr[n-1]<<endl;
        cout <<fixed<<setprecision(6)<<(mean+arr[n-1])<<endl;
    }
}