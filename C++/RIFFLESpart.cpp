#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int a[n], b[n];
        for(int j=0;j<n;j++){
            a[j]=j+1;
        }
        
        for(int j=1;j<=k;j++){
            int c=0;
            for(int k=0;k<n;k+=2){
                b[c]=a[k];
                c++;
            }
            for(int k=1;k<n;k+=2){
                b[c]=a[k];
                c++;
            }
            for(int k=0;k<n;k++){
                a[k]=b[k];
            }
        }
        for(int j=0;j<n;j++)
            cout<<b[j]<<" ";
        cout<<endl;
    }
}