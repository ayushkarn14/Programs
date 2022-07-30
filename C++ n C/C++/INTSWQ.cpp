#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long k;
        cin>>k;
        int c=-1;
        for(double j=k;j>0;j=j/2)
        {
            if(long(j)!=j)
                break;
            c++;
        }
        cout<<c<<"\n";
    }
}