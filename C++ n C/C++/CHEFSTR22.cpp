#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int f=1;
    long long l=s.length();
    for(int i=0;i<l;i++){
        if((!((s.at(i)=='a') || (s.at(i)=='e') || (s.at(i)=='i') || (s.at(i)=='o') || (s.at(i)=='u')) && ((t.at(i)=='a') || (t.at(i)=='e') || (t.at(i)=='i') || (t.at(i)=='o') || (t.at(i)=='u'))) || (((s.at(i)=='a') || (s.at(i)=='e') || (s.at(i)=='i') || (s.at(i)=='o') || (s.at(i)=='u')) && !((t.at(i)=='a') || (t.at(i)=='e') || (t.at(i)=='i') || (t.at(i)=='o') || (t.at(i)=='u'))))
            f=0;
    }
    if(f==1)
        cout<<"Yes";
    else
        cout<<"No";
}