#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int n,d,inf=1;
        cin>>n>>d;
        if(d<11)
            inf=inf*pow(2,d);
        else if(d<21){
            
            inf=inf*pow(2,10)*pow(3,d-10);
        }
        else
            inf=n;
        if(n<inf)
            op[i]=n;
        else
            op[i]=inf;
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
}