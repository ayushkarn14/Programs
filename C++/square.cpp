#include <bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    int arr[l];
    int s=0,max=0;
    for(int i=0;i<l;i++)
        cin>>arr[i];
    for(int i=0;i<l;i++){
        s=0;
        for(int j=i;j<l;j++){
            s+=arr[j];
            if(s>max)
                max=s;
        }
    }
    cout<<max;
}