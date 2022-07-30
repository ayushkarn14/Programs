#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long op[t];
    for (int i= 0; i < t; i++)
    {
        long nn;
        cin>>nn;
        long arr[nn];
        for (int j = 0; j < nn; j++)
            cin>>arr[j];
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
        op[i]=(arr[nn-1]-arr[0])*arr[n-2];
   }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
}