#include <bits/stdc++.h>
using namespace std;
bool prime(int x){
    int p=0;
    for(int i=2;i<(x/2)+1;i++){
        if(x%i==0)
            p++;
    }
    if(p==0)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin>>n;
    int p=0,i=0,c=0;
    for(int i=2;i<sqrt(n)+1;i++){
        if(prime(i))
            c++;
    }
    cout<<c;
}