#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int n;
        string bi;
        cin>>n;
        cin>>bi;
        int no=0,nz=0;
        for(int j=0;j<n;j++){
            if(bi[j]=='1')
                no++;
            if(bi[j]=='0')
                nz++;
        }
        if(nz<2 || no<2)
            op[i]=0;
        else if(nz>no)
            op[i]=no-1;
        else
            op[i]=nz-1;
    }
    for(int i=0;i<t;i++){
        cout<<op[i]<<endl;
    } 
}