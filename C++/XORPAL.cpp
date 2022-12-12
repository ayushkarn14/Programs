#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float n;
        cin>>n;
        string s;
        int a=0,b=0;
        cin>>s;
        for(char i:s){
            if(i=='1')
                a++;
            else
                b++;
        }
        if(a%2==1 && b%2==1 && a!=b)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        //0 e && 1 e=YES
        //0 o && 1 o=NO
        //0 e && 1 o=YES
        //0 o && 1 e=YES
        // a=s.substr(0,ceil(n/2));
        // b=s.substr(n/2,n);
    }
}
//000111