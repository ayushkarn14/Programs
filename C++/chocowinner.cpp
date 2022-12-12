// #include <iostream>
// using namespace std;

// int maxFreq(int *arr,int n) {
// 	int o=0;
// 	int c=1;
// 	for(int i=1;i<n;i++) {
// 		if(arr[i]==arr[o]) {
// 			c++;
// 		} else{
// 			c--;
// 		}
// 		if(c==0){
// 			o=i;
// 			c=1;
// 		}	
// 	}
// 	return arr[o];
// }

// int main()
// {   int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int l;
//         cin>>l;
// 	int arr[l];
//     for(int j=0;j<l;j++)
//         cin>>arr[l];
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int freq = maxFreq(arr , n);
// 	int c=0;
// 	for(int j=0;j<n;j++) {
// 		if(arr[i]==freq) {
// 			c++;
// 		}
// 	}
// 	cout<<maxFreq(arr,n)<<endl;
// 	return 0;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int c=0,max=0,maxel=0;
        int l;
        cin>>l;
        int arr[l];
        for(int j=0;j<l;j++)
            cin>>arr[j];
        for(int j=0;j<l;j++)
        {   
            c=0;
            for(int k=0;k<l;k++)
                {
                    if(arr[j]==arr[k])
                        c++;
                }
                if(max<c){
                    max=c;
                    maxel=arr[j];
                }
        }
        if(max>l/2)
            cout<<maxel<<endl;
        else
            cout<<-1<<endl;
        
    }
}