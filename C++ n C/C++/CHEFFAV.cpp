#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    bool op[t];
    for(int i=0;i<t;i++){
        int n;
        string s;
        cin>>n>>s;
        string str1="code";
        size_t found = s.find("code");
        size_t found2 = s.find("chef");
        if(found<found2)
        op[i]=true;
        else
        op[i]=false;
    }
    for(int i=0;i<t;i++){
        if(op[i])
            cout<<"AC"<<endl;
        else
            cout<<"WA"<<endl;
    }
    return 0;
}