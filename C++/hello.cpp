#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int&i : a) cin>>i;

        map<int,int> freq;
        for(int i:a) freq[i]++;
        int mxfreq=-1;
        for(auto pii:freq){
            maxfreq=max(maxfreq, pii.second);
        }
        int ans=-10;
        if(n==1){
            ans=0;
        }
        else if(mxfreq==1){
            ans=-1;
        }   
        else{
            ans=(n-mxfreq)+1
        }
        cout << ans<<endl;
    }

}