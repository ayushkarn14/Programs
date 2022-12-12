#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        if(a1+a2 > b1+b2){

            if(a1+a2 > c1+c2)
                cout<<a1+a2<<endl;
            else
                cout<<c1+c2<<endl;
        }
        else{
            if(b1+b2 > c1+c2)
                cout<<b1+b2<<endl;
            else
                cout<<c1+c2<<endl;
        }
    }
}