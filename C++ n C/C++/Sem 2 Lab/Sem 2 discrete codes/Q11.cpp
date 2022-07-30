#include <iostream>
using namespace std;
class Q11{
    public:
        long long ans;
        long long P(long long,long long);
        long long C(long long,long long);
};
long long Q11::P(long long n,long long r){
    if (r==1)
        return n;
    else{
        return (n*P(n-1,r-1));
    }
}
long long Q11::C(long long n, long long r){
    if(r==1)
        return n;
        return (n*(C(n-1,r-1))/r);
}
int main(){
    long long N,R;
    cout<<"Enter n : ";
    cin>>N;
    cout<<"Enter r : ";
    cin>>R;
    Q11 ob;
    cout<<N<<"P"<<R<<" = "<<ob.P(N,R)<<endl;
    cout<<N<<"C"<<R<<" = "<<ob.C(N,R)<<endl;
}