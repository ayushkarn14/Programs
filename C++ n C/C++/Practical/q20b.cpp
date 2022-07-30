#include <iostream>
using namespace std;
int main(){
    int i,n,t,m,r,gcd;
    cout<<"Enter two numbers :"<<endl;
    cin>>m;
    cin>>n;
    cout<<"GCD of "<<m<<" and  "<<n<<" = ";
    if(n>m){
        t=n;
        n=m;
        m=t;
    }
    while(true){
        r=m%n;
        if(r!=0){
            m=n;
            n=r;
        }
        else{
            gcd=n;
            break;
        }
    }
    cout<<gcd<<endl;
}