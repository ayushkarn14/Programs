#include <bits/stdc++.h>
using namespace std;
long factorial(int n){
    if(n==0)
        return 1;
    long f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        int o=x,t=0;
        int ans=0;
        while(o>=0){
            ans+=factorial(x)/(factorial(o)*factorial(t));
            o-=2;
            t++;
            x--;
        }
        cout<<ans<<endl;
    }
}