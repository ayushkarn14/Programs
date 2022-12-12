#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int n,x,y;
        cin>>n>>x>>y;
        if((x+y)%2==0)
            op[i]=0;
        else
            op[i]=1;
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
}