#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        float n,m;
        cin>>n,m;
        //op[i]=(int)(ceil(m/2.0))*(ceil(n/2.0));
        cout>>ceil(m/2.0)>>" ">>ceil(n/2.0);
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
}