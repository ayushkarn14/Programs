#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ayush=0;ayush<t;ayush++){
        long long x;
        cin>>x;
        long long c=0;
        long long xx=x;
        if(floor(log2(xx+1))==ceil(log2(xx+1)))
            c=1;
        while(x>0){
            x/=2;
            c++;
        }
        long long p=pow(2,c)-1;
        cout<<0<<" "<<xx<<" "<<p<<endl;
    }
}