#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        if((z-y)>=(a+b+c))
            op[i]=1;
        else
            op[i]=0;
    }
    for(int i=0;i<t;i++){
        if(op[i]==1)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
}