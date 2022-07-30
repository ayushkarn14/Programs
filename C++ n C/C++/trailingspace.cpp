#include <bits/stdc++.h>
using namespace std;
string removespace(string &str){
    int l=str.length(),ind=l-1;
    for(int i=l-1;i>=0;i--){
        if(str.at(i)!=' ')
            {
                ind=i;
                break;
            }
    }
    str=str.substr(0,ind+1);
}
int main(){
    cout<<"Enter a sentence"<<endl;
    string sss;
    int l=sss.length();
    getline(cin, sss);
    removespace(sss);
    cout<<sss;
}