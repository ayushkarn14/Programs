#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++)
    {
        int l;
        cin>>l;
        int arr[l];
        for(int j=0;j<l;j++)
            cin>>arr[j];
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
        int a=arr[l/2];
        int b=arr[(l/2)-1];
        op[i]=abs(a-b);
    }
    for(int i=0;i<t;i++)
        cout<<op[i]<<endl;
    return 0;
}