#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter a number: ";
    cin>>n;
    while (n!=0){
        int d = n%10;
        r = r*10+d;
        n/=10;
    }
    cout<<"Reverse of "<< n <<" is: "<<r;
    return 0;
}