#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,nn;
        cin>>nn>>x;
        int arr[nn];
        for(int j=0;j<nn;j++)
            cin>>arr[j];

        
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);

        int s=0,j,f=0;
        for(j=nn-1;j>=0;j--){
            s+=arr[j];
            if(s>=x){
                f=1;
                break;
            }
        }
        cout<<((f==1)?(nn-j):-1)<<endl;
    }
}