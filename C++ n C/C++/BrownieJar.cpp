#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    #include<limits.h>
    int getJars(int arr[], int N, int M) 
    {
        int i,st,end;
        st=end=0;
        for(i=0;i<N;i++)
        {
            end+=arr[i];
            if(arr[i]>st)
                st=arr[i];
        }
        int ans=end;
        int mid,sum,book_ctr;
        while(st<=end)
        {
            mid=(st+end)/2;
            book_ctr=1;
            sum=0;
            for(i=0;i<N;i++)
            {
                sum+=arr[i];
                if(sum>mid)
                {
                    sum=arr[i];
                    book_ctr++;
                }
            }
            if(book_ctr<=M)
            {
                ans=mid;
                end=mid-1;
            }
            else
                st=mid+1;
        }
        return ans;
    }
};


int main() {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution obj;
        cout << obj.getJars(A, n, m) << endl;
    return 0;
}