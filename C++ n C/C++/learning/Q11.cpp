#include <iostream>
using namespace std;
class Q11{
	public:
	int n,r;
	int P(int n,int r);
	int C(int n,int r);
	Q11(int x,int y){
		n=x;
		r=y;
	}
};
int Q11::P(int n,int r){
	if(r==1)
		return n;
	else
		return n*(P(n-1,r-1));
}
int Q11::C(int n,int r){
	if(r==1)
		return n;
	else
		return (n/r)*(C(n-1,r-1));
	}
int main(){
	int n,r,c;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"1 for P, 2 for C : ";
	cin>>c;
	Q11 ob(n,r);
	switch(c){
		case 1:
			cout<<n<<"P"<<r<<" = "<<ob.P(n,r)<<endl;
			break;
		case 2:
			cout<<n<<"C"<<r<<" = "<<ob.C(n,r)<<endl;
			break;
		default:
			cout<<"Wrong choice"<<endl;
	}
}
