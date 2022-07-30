#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int r1,g1,b1,r2,g2,b2,r3,g3,b3,n;
        cin>>n>>r1>>g1>>b1>>r2>>g2>>b2>>r3>>g3>>b3;
        int min=(r1<g2)?((r1<b3)?r1:b3):((g2<b3)?g2:b3);
        int a=g1+b1+b2;
        int b=r3+r2+g3;
        cout<<((a>b)?a:b)<<endl;
    }
}