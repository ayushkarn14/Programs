#include <iostream>
using namespace std;
void fib(int a,int b,int n){
    if(n>0){
        cout<<a+b<<" ";
        fib(b,a+b,n-1);
    }
}
int main(){
    cout<<"n?";
    int n;
    cin>>n;
    if(n==1)
        cout<<"0";
    else{
        cout<<"0 1 ";
        fib(0,1,n-2);
    }
}