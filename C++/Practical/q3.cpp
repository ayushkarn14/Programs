#include<iostream>
using namespace std;
int main(){
    int n;
    float sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        sum += 1.0/i;
    }
    cout<<"Sum of the series = "<<sum;
    return 0;
}