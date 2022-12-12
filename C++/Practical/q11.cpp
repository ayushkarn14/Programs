#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int l=str.length();
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"Alphabet    Count"<<endl;
    for(int i=65;i<90;i++){
        int c=0;
        for(int j=0;j<l;j++){
            if(char(i)==str.at(j))
                c++;
        }
        if(c!=0)
        cout<<char(i)<<"        "<<c<<endl;
    }
}