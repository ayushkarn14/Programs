#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ali[n];
        int bob[n];
        for(int j=0;j<n;j++)
            cin>>ali[j];
        for(int j=0;j<n;j++)
            cin>>bob[j];
        for(int j=0;j<n;j++)
            cout<<ali[j];
    }
}