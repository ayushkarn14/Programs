#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int fac=1;
    for(int i=1;i<=num;i++)
        fac=fac*i;
    cout<<"Factorial = "<<fac;
}