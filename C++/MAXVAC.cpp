//nai hua h
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        string tofind="";
        for(int j=0;j<x;j++)
            tofind+='0';
        int count = 0;
        size_t nPos = s.find(tofind, 0);
        while(nPos != string::npos)
        {
            count++;
            nPos = s.find(tofind, nPos + x);
        }
        cout<<count;
        tofind="";int count2=0;


        for(int j=1;j<x-1;j++){
            tofind="";
            for(int k=0;k<j;k++)
                tofind+='0';
            tofind+='1';
            for(int k=x-1;k>j;k--)
                tofind+='0';
            cout<<tofind<<endl;
            size_t nPos = s.find(tofind, 0);
            while(nPos != string::npos)
            {
                count2++;
                nPos = s.find(tofind, nPos + 1);
                if(count2==1)
                    break;
            }
            if(count2==1)
                    break;
        }
            cout<<count+count2<<endl;
    }
}