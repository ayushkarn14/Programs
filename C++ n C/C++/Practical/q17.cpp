#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter length of 1st array :";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of 1st array :"<<endl;
    for(int i=0;i<a;i++)
        cin>>arr[i];
    cout<<"Enter length of 2nd array :";
    cin>>b;
    int arr2[b+a];
    cout<<"Enter elements of 2nd array :"<<endl;
    for(int i=0;i<b;i++)
        cin>>arr2[i];
    for(int i=0;i<a;i++){
        arr2[b+i]=arr[i];
    }
    for(int i=0;i<a+b;i++){
        for(int j=0;j<a+b-i;j++){
            if(arr2[j+1]<arr2[j]){
                c=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=c;
            }
        }
    }
    for(int i=0;i<a+b;i++){
        cout<<arr2[i]<<" ";
    }
}