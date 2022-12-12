#include<iostream>
using namespace std;
bool isPrime(int n){
    int p=0;
    for (int i=1; i<=n; i++){
        if(n%i==0)
            p++;
    }
    if(p==2)
        return true;
    else
        return false;
}
int main(){
    for (int i=1; i <= 100; i++){
        if (isPrime(i))
        cout<<i<<endl;
    }
    return 0;
} 