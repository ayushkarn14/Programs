#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        if(m>n)
            m=n;
        cout<<(n*2-m)<<endl;
    }
}