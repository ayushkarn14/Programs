#include<iostream>
using namespace std;
class Encryption{
    public:
    string findxor(string,string);
    string div(string,string);
    string enc(string, string);

};
string Encryption::findxor(string a,string b){
    string res="";
    for(int i=1;i<a.length();i++){
        if(a[i]==b[i])
            res=res+'0';
        else
            res=res+'1';
    }
    return res;
}
string Encryption::div(string dividend,string divisor){
    int l1=dividend.length();
    int l2=divisor.length();
    string temp=dividend.substr(0,l2);
    while(l2<l1){
        if(temp[0]=='1'){
            temp=findxor(temp,divisor)+dividend[l2];
        }
        else{
            temp=temp=findxor(string(l2,'0'),divisor)+dividend[l2];
        }
        l2++;
    }
    if(temp[0]=='1'){
        temp=findxor(temp,divisor);
    }
    else{
        temp=temp=findxor(string(l2,'0'),divisor);
    }
    return temp;
}
string Encryption::enc(string key,string msg){
    msg=msg+string(key.length()-1,'0');
    return (div(msg,key));
}
int main(){
    Encryption ob;
    cout<<ob.enc("1101","100100");
}