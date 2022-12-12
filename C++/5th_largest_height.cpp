#include <bits/stdc++.h>
using namespace std;
int main(){
    int nn;
    cin>>nn;
    int arr[nn];
    for(int j=0;j<nn;j++)
            cin>>arr[j];
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<(arr[n-5]);
}