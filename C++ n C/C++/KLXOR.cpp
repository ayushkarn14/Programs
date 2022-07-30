#include <iostream>
using namespace std;
string xoring(string a, string b, int nn){
string ans = "";
    for (int i=0;i<nn;i++)
    {
        if (a[i] == b[i])
            ans+="0";
        else
            ans+="1";
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    int c=0;
    int op[t];
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        c=0;
        string s1=s.substr(0,k);
        for(int j=1;j<=n-k;j++)
        {
            s1=xoring(s1,s.substr(j,k),k);
        }
        for(int j=0;j<n;j++){
            if(s1[j]=='1')
                c++;
        }
        op[i]=c;
    }
    for(int i=0;i<t;i++){
        cout<<op[i]<<endl;
    }
}