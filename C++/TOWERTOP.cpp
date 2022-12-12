#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long x,m,op=0;
        cin>>x>>m;
        op=ceil(log2(x))+1;
        if(op>m)
            cout<<0<<endl;
        else
            cout<<m-op+1<<endl;
    }
}