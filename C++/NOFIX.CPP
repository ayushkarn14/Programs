#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n+1];
        int pos[n+1];
        arr[0]=0;
        int c=0, temp=0;
        memset(pos, 0, sizeof(pos));
        for(int j=1;j<=n;j++)
            cin>>arr[j];//0 3 2 4 2

        for(int j=1;j<=n;j++)
            pos[j]=j-arr[j];
        
        for(int j=1;j<=n;j++){
            if(pos[j]==temp){
                c++;
                temp--;
            }
        }


        // for(int j=1;j<=n;j++){
        //     if(pos[j]==0){
        //         for(int k=j;k<=n;k++){
        //             pos[k]+=1;
        //         }
        //         c++;
        //     }
        // }
        cout<<c<<endl;
    }
}
//1  2  3  4
//3  2  4  6
//-2 0 -1  -2