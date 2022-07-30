#include <bits/stdc++.h>
using namespace std;
void exchange(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
int main(){
    int a=5;
    int b=7;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    exchange (&a, &b);
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}