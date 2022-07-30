#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int n,m;
        int npf=1;
        cin>>n>>m;
        if(m==1)
            op[i]=0;
        else if(m%2==1)
            op[i]=1;
        else
        {
            for(int j=2;j<=m;j++)
            {
                if(m%j==0)
                {   int p=0;
                    for(int k=1;k<=j;k++)
                    {    if(j%k==0)
                        p++;
                    }
                    if(p==2)
                        npf++;
                }
            }
            while(n%npf!=0)
            {
                npf--;
            }
            op[i]=npf;
        }
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
}