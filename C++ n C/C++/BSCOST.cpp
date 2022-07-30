#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        int n,x,y;
        cin>>n>>x>>y;
        int one=0,zero=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s.at(i)=='1')
                one++;
            else
                zero++;
        }
        if(one!=0 && zero!=0)
            cout<<((x<y)?x:y)<<endl;
        else
            cout<<0<<endl;
    }
}