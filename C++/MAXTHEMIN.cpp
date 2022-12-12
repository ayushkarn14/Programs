#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int min = 9999;
        int ind = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] < min){
                min = arr[i];
                ind=i;
            }
        }
        int max=-999;
        int low=((ind-k)<0)?0:(ind-k);
        int high=((ind+k)>(n-1))?(n-1):(ind+k);
        cout<<low<<" "<<high<<endl;
        for(int i=low;i<high;i++){
            if(max<arr[i])
                max=arr[i];
        }
        cout<<max<<endl<<endl;
    }
}