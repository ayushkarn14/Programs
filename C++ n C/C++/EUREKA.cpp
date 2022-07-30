#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long o=round(pow((0.143*n),n));
        cout<<o<<endl;
    }
}