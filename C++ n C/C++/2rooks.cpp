#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 || y1==y2)
        op[i]=1;
        else
        op[i]=0;
    }
    for(int i=0;i<t;i++)
    {
        if(op[i]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}