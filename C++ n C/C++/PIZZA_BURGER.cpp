#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,p,b;
        cin>>x>>p>>b;
        if(x>=p)
            cout<<"PIZZA"<<endl;
        else if(x>=b)
            cout<<"BURGER"<<endl;
        else    
            cout<<"NOTHING"<<endl;
            
    }
}