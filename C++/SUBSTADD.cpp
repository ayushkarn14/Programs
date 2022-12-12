#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n],arr2[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            cin>>arr2[i];
        bool f=true;
        for(int i=0;i<n;i++){
            if((arr2[i]-arr[i]!=x) && (arr2[i]-arr[i]!=y))
                f=false;
            if(!f)
                break;
        }
        if(!f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}