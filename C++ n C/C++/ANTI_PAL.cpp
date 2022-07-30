#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        string s;
        cin>>n>>s;
        int arr[26];
        memset(arr, 0, sizeof(arr));
        int f=1;
        if(n%2==1)
            f=0;
        else{
        for(int j=0;j<n;j++)
            arr[int(s[j])-97]+=1;
        }
        int eq=0;
        // for(int j=0;j<26;j++)
        //     cout<<arr[j]<<" ";
        for(int j=0;j<26;j++){
            if(arr[j]>=n/2){
                if(arr[j]==n/2)
                    eq=1;
                if(arr[j]>n/2)
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
        int c=0;
        int ar[26][2];
        for(int j=0;j<26;j++){
            ar[j][0]=j;
            ar[j][1]=arr[j];
        }
        if(eq==1){
            for (int step = 0; step < 26; ++step) {
      
            for (int ij = 0; ij < 26 - step; ++ij) {
            if (ar[ij][1] > ar[ij + 1][1]) {
        int temp = ar[ij][0]; int temp2=ar[ij][1];
        ar[ij][0] = ar[ij + 1][0]; ar[ij][1]=ar[ij+1][1];
        ar[ij+1][0] = temp; ar[ij+1][1]=temp2;
      }
    }
  }
  for(int j=0;j<26;j++){
      for(int k=0;k<ar[j][1];k++){
          cout<<char(ar[j][0]+97);
      }
  }
        }
        else{
            string str1="";
            string str2="";
            int counter=0;
            while(counter<n){
                for(int j=0;j<26;j++){
                    if(counter%2==0)
                    if(arr[j]>0){
                        str1+=char(j+97);
                        counter++;
                        arr[j]-=1;
                        }
                        else{
                    if(arr[j]>0){
                        str2+=char(j+97);
                        counter++;
                        arr[j]-=1;
                        }
                }
            }
        }
        cout<<str1+str2;
}
}
}

