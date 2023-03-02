#include <bits/stdc++.h>
using namespace std;


int smallestDivisor(int n)
{
    if (n % 2 == 0)
        return 2;
     for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long x;
        double y;
        cin>>x;
        cin>>y;
        int fac=smallestDivisor(x);
        if(fac!=2)
            cout<<(long)(ceil((y-(x+fac))/2+1));
        else
            cout<<(long)(ceil((y-x)/2));
        cout<<endl;
    }
}