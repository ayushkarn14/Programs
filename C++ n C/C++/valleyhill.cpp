#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string op[t];
    for(int i=0;i<t;i++){
        int v,h;
        cin>>h;
        cin>>v;
        if(h>v){
            for(int j=0;j<v;j++)
                op[i]=op[i]+"01";
            for(int j=0;j<h-v;j++)
                op[i]=op[i]+"010";
        }
        else if(h==v)
        {
            for(int j=0;j<h+1;j++)
                    op[i]=op[i]+"01";
        }
        else
        {
            for(int j=0;j<h+1;j++)
                op[i]=op[i]+"10";
            for(int j=0;j<v-h-1;j++)
                op[i]=op[i]+"110";
            op[i]=op[i]+"1";
        }
    }
    for(int i=0;i<t;i++)
        {
            cout<<op[i].size()<<endl<<op[i]<<endl;
        }    
    return 0;
}