#include <iostream>
using namespace std;

int main() {
    int n=0;
    cout<<"Enter a numebr: ";
    cin>>n;
    int nn=n;
    int d=0;
    while(nn!=0)
    {
        d++;
        nn/=10;
    }
    nn=n;
    int digits[d];
    for(int i=0;i<d;i++)
    {
        digits[i]=n%10;
        n/=10;
    }
    cout<<0<<"   ";
    for(int i=(d-1);i>=0;i--)
        cout<<digits[i]<<"   ";
    cout<<endl;
    for(int i=(d-1);i>=0;i--)
    {
        for(int j=i;j>=0;j--)
            cout<<digits[j]<<"   ";
        cout<<endl;
    }
    return 0;
}