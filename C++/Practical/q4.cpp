#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        if (i%2==0)
        sum-=i;
        else
        sum+=i;
    }
    cout<<"The sum of series = "<<sum;
    return 0;
}