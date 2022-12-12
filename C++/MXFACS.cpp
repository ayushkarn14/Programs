#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int max=0;
        for(int k=2;k<=n;k++){
            if(n%k==0)
            {
                int m=n/k;
                int f=2;
                for(int j=2;j<(m/2);j++)
                    if(m%j==0)
                        f++;
                if(f>max)
                {
                    max=f;
                    op[i]=k;
                }
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<op[i]<<endl;
    }
}