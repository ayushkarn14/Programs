#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int c=0,cc=65;
        while(c<n)
        {
            cout<<char(cc);
            cc++;
            c++;
            if(cc>90)
                cc=65;
        }
        cout<<endl;
    }
}