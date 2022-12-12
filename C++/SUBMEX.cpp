#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;
        if(x>k)
            cout<<-1<<endl;
        else{
            int c=0;
            for(int j=0;j<n;j++){
                cout<<c<<" ";
                c++;
                if(c==x)
                    c=0;
            }
            cout<<endl;
        }
    }
}