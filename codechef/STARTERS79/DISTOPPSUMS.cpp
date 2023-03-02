#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int c=1;
        for(int i=n/2-1;i>=0;i--)
            arr[i]=c++;
        for(int i=n/2;i<n;i++)
            arr[i]=c++;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}