#include <bits/stdc++.h>
using namespace std;
void calc(int rad, float &cir, float &area){
    cir=2*3.1415926536*rad;
    area=3.1415926536*rad*rad;
}
int main(){
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    float c=0, a=0;
    calc(r,c,a);
    cout<<"Circumference = "<<c<<endl;
    cout<<"Area = "<<a<<endl; 
}