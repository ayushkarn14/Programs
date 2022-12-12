#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int f=1;
        double arr[n][2];
        for(int j=0;j<n;j++){
            cin>>arr[j][0]>>arr[j][1];
        }
        // for(int j=0;j<n;j++){
        //     cout<<arr[j][0]<<" "<<arr[j][1]<<endl;
        // }
        for(int j=1;j<n;j++){
            if(arr[j][1]<arr[j-1][1]){
                cout<<"NO"<<endl;
                f=0;
                break;
            }
            else if(arr[j][1]>arr[j-1][1]){
                if((arr[j][0]-arr[j-1][0])<(arr[j][1]-arr[j-1][1])){
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
            }
            }
            if(f==1){
                cout<<"YES ";
                double A=arr[n-1][1]/arr[n-1][0]*100.0;
                // cout<<A;
                if(A<25)
                    cout<<"HARD"<<endl;
                else if(A<50)
                    cout<<"MEDIUM"<<endl;
                else if(A<75)
                    cout<<"EASY"<<endl;
                else
                    cout<<"CAKEWALK"<<endl;
        }
    }
}