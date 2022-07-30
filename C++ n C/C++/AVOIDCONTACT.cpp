#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        if(x==y)
            cout<<2*y-1<<endl;
        else
        cout<<(x-y)+2*y<<endl;
    }
}