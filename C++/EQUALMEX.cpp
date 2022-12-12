#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n*2];
        int nn = n * 2;
        int max = 0;
        int ans = 1;
        int zero_found = 0;
        int tempin;
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> tempin;
            if (tempin> max)
                max = tempin;
            arr[j] = tempin;
        }
        int temp = 0;
        int frequency[n + 1]; // freq array
        for (int j =0 ; j < n+1;j++){
            frequency[j] = 0;
        }
        for (int j = 0; j < n * 2; j++)
        {
            temp = arr[j];
            frequency[temp] += 1;
        }
        for(int j=0;j<=max;j++){
            if(frequency[j]==1 && zero_found==0)
                ans=0;
            else if(frequency[j]==0){
                zero_found=1;
            }
        }
        (ans)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
return 0;
}