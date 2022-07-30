#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a;
        cin>>n>>a;
        cout<<((a>(n-a))?(n-a):a)<<endl;
    }
}