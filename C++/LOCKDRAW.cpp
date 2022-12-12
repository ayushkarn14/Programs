#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int max=(a>b)?((a>c)?a:c):(b>c)?b:c;
        if(max==a)
            if(max-b-c==0)
                cout<<"YES"<<endl;
            else   
                cout<<"NO"<<endl;
        else if(max==b)
            if(max-a-c==0)
                cout<<"YES"<<endl;
                else   
                cout<<"NO"<<endl;
        else if(max==c)
            if(max-a-b==0)
                cout<<"YES"<<endl;
                else   
                cout<<"NO"<<endl;
    }
}