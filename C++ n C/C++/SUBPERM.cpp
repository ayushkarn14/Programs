#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        if(n==1 && k==1)
            cout<<1<<endl;
        else if(k<2 || k>n) 
            cout<<-1<<endl;
        else{
            int c=0;
        for(int i=0;i<k-1;i++){
            cout<<(i+1)<<" ";
            c=i;
        }
        for(int i=0;i<n-c-1;i++)
            cout<<(n-i)<<" ";
        cout<<endl;
        cout<<endl;
    }
    }
}