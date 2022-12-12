#include<iostream>
#define swap(a,b){int c=a+b;a=c-a;b=c-b;}
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    swap(a,b);
    cout<<"a: "<<a<<", b: "<<b;

}