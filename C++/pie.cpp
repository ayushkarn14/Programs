#include <bits/stdc++.h>
using namespace std;
const int mod=1073741824;
#define int long long
signed main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>prev;
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {cin>>a[i];
	    mp[a[i]]++;
	        
	    }
	    int mxfreq=1;
	    int ans=mp.size(),temp=ans;
	    int idx=0;
	    for(auto i:mp){
	        mxfreq=max(mxfreq,i.second);
	    }
	    int cnt=0;
	    for(auto i:mp){
	        cnt+=(i.second==mxfreq);
	    }
	    if(mxfreq==1){
	        cout<<ans<<endl;
	        continue;
	    }
	    int k=(n-cnt)/(mxfreq-1);
	    ans=min(ans,k-1);
	    cout<<ans<<endl;
	    
	}
	    
}