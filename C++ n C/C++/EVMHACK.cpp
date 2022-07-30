#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        if((a+b+c)>(p+q+r)/2)
            cout<<"YES"<<endl;
        else{
            if((b+c+p)>(p+q+r)/2)
                cout<<"YES"<<endl;
            else if((c+a+q)>(p+q+r)/2)
                cout<<"YES"<<endl;
            else if((b+a+r)>(p+q+r)/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}