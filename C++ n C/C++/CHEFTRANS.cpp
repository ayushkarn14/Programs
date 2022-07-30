#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y)<z)
            op[i]=1;
        else if((x+y)>z)
            op[i]=0;
        else
            op[i]=2;
    }
    for(int i=0;i<t;i++){
        if(op[i]==0)
            cout<<"TRAIN"<<endl;
        else if(op[i]==1)
            cout<<"PLANEBUS"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
}