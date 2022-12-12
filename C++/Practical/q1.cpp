#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int s=0,p=1;
    while (n!=0){
        int d = n%10;
        s+=d;
        p*=d;
        n/=10;
    }
    cout<<"sum: "<<s<<endl;
    cout<<"product: "<<p;
    return 0;
}
