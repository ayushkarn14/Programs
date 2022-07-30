#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char op[t];
    int a,b,c,d;
    for(int j=0;j<t;j++)
    {
        cin>>a>>b>>c>>d;
        if(b>a)
            a+=c;
        else
            b+=c;
        if(b>a)
            a+=d;
        else
            b+=d;
        if(b>a)
            op[j]='S';
        else
            op[j]='N';
    }
    for(int j=0;j<t;j++)
    {
            cout<<op[j]<<endl;;
    }
    return 0;
}
