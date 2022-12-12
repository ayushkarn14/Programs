#include <iostream>
using namespace std;
int main(){
    int t;
    
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        n-=1;
        op[i]=0;
        for(int j=1;j<=n/2;j++)
        {
            if(n%j==0)
            op[i]++;
        }
        op[i]+=1;
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
    return 0;
}