#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;string s,s1,s2;
        cin>>n>>k>>s;
        if(n==1)
            cout<<"YES";
        else if(n%2!=0){
            s1=s.substr(0,n/2);
            s2=s.substr(n/2+1,n-1);
            reverse(s2.begin(), s2.end());

            int c=0;
        for(int j=0;j<s2.length();j++){
            if(s1.at(j)!=s2.at(j))
                c++;
        }
        if(c<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
        else{
            s1=s.substr(0,n/2);
            s2=s.substr(n/2,n-1);
            reverse(s2.begin(), s2.end());
            int c=0;
        for(int j=0;j<s2.length();j++){
            if(s1.at(j)!=s2.at(j))
                c++;
        }
        if((k-c)%2==0 && c<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}

