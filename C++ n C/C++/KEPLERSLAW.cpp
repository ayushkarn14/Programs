#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    bool op[t];
    for(int i=0;i<t;i++){
        float t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        if((t1*t1)/(t2*t2)==(r1*r1*r1)/(r2*r2*r2))
            op[i]=true;
        else
            op[i]=false;
    }
    for(int i=0;i<t;i++){
        if(op[i])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    int a;
    cin>>a;
}