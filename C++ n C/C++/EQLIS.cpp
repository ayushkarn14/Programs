#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n==2)
            cout<<"NO"<<endl;
        else if(n==4)
            cout<<"4 1 3 2";
        else{
            cout<<"YES"<<endl;
            if(n%2==1){
            for(int j=1;j<=n/2;j++)
                cout<<j<<" ";
            for(int j=n;j>n/2;j--)
                cout<<j<<" ";
            cout<<"\n";
            }
            else{
            cout<<n-2<<" ";
            for(int j=n/2;j<=n;j++){
                if(j!=n-2)
                    cout<<j<<" ";
                }
            for(int j=(n/2)-1;j>=1;j--)
                cout<<j<<" ";
            cout<<"\n";
            }
        }
    }
}