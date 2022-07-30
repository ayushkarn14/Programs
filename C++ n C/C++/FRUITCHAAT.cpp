#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int min;
        x=x/2;
        if(x<y)
            min=x;
        else
            min=y;
        cout<<min<<endl;
    }
}