#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n*2];
        for(int j=0;j<n*2;j++)
            cin>>arr[j];
        int o=0;
        int e=0;
        for(int j=0;j<n*2;j++){
            if(arr[j]%2==0)
                e++;
            else
                o++;
        }
        if(o%2==0 && e%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}