#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string op[t];
    for(int i=0;i<t;i++){
        int kx,ky,r1x,r1y,r2x,r2y;
        cin>>kx>>ky;
        cin>>r1x>>r1y;
        cin>>r2x>>r2y;
        if(kx==1 || kx==8 || ky==1 || ky==8)
        {
            if((r1x==kx+1 && r1y==ky+1)|| (r1x==kx+1 && r1y==ky-1) || (r1x==kx-1 && r1y==ky+1)|| (r1x==kx-1 && r1y==ky-1) || (r2x==kx+1 && r2y==ky+1)|| (r2x==kx+1 && r2y==ky-1) || (r2x==kx-1 && r2y==ky+1)|| (r2x==kx-1 && r2y==ky-1) )
                op[i]="NO";
            if(kx==1 || kx==8)
            {
                if(r1y==r2y)
                    op[i]="NO";
                else
                    op[i]="YES";
            }
            if(ky==1 || ky==8)
            {
                if(r1x==r2x)
                    op[i]="NO";
                else
                    op[i]="YES";
            }
        }
        else
            op[i]="NO";
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
    return 0;
}