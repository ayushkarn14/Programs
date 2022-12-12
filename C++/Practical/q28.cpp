#include <bits/stdc++.h>
using namespace std;
void rev(int &x){
    int r=0,d=0;
    while(x!=0){
        d=x%10;
        r=r*10+d;
        x/=10;
    }
    x=r;
}
int main(){
    cout<<"Enter length of array : ";
    int l;
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
        cin>>arr[i];
    for(int i=0;i<l;i++)
        rev(arr[i]);
    cout<<"Elements reversed: "<<endl;
    for(int i=0;i<l;i++)
        cout<<arr[i]<<" ";
}