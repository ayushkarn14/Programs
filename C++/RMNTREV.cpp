#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string op[t];
    for (int i = 0; i < t; i++)
    {
        int n,k;
        string s="";
        cin>>n>>k;
        cin>>s;
        int c=k/2;
        op[i]="";
        if(k%2==1)
        {
        for(int j=0;j<k;j++)
        {
            
            if(j%2==0)
                c=c-j;
            else
                c=c+j;
            op[i]=op[i]+s[c];
        }
        }
        else
        {
            for(int j=0;j<k;j++)
        {
            if(j%2==0)
                c=c+j;
            else
                c=c-j;
            op[i]=op[i]+s[c];
        }
        }
        for(int j=k;j<n;j++)
            op[i]=op[i]+s[j];
    }
    for (int i = 0; i < t; i++)
    {
        cout<<op[i]<<endl;
    }
}