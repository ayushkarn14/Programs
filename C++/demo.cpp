#include <iostream>
#include <algorithm>
using namespace std;
  
int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n); 
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else 
              r++;
    }  
    return count;
}
 
int main()
{
    int nn;
    cin>>nn;
    int arr[nn];
    for(int i=0;i<nn;i++)
        cin>>arr[i];
    int k;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    cin>>k;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countPairsWithDiffK(arr, n, k);
    return 0;
}