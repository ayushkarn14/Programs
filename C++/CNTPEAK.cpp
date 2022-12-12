#include <iostream>
using namespace std;
int main(){
    int x[3];
    int y=3*3*3;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(x[j]<2)
            {
                x[j++];
                break;
            }
            if(x[i]==2)
            {
                x[j+1]=1;
                for(int k=0;k<=j;k++)
                {
                    x[k]=0;
                }
            }
        }
        for(int j=0;j<3;j++)
            cout<<x[j]<<" ";
    }
}