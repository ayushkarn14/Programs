#include <iostream>
using namespace std;
int main(){
    int t;
    bool op[t];
    cin>>t;
    for(int i=0;i<t;i++){
        int x1,x2;
        cin>>x1>>x2;
        if(x2<=x1)
            {
                op[i]=true;
            }
        else
            {
                op[i]=false;
            }
    }
    for(int i=0;i<t;i++){
        if(op[i])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
