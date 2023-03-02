#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b;
        if(a==b){
            if(a%2==0)
                cout<<"CHEFINA";
            else cout<<"CHEF";
        }
        else if(a>b+2)
            cout<<"CHEF";
        else if(b>a+2)
            cout<<"CHEFINA";
        else{
            if(a<b)
                c=a;
            else c=b;
            if(c%2==1)
                cout<<"CHEF";
            else cout<<"CHEFINA";
        }
        cout<<endl;
    }
}