#include <iostream>
using namespace std;
class Series{
	public:
		int *arr;
		int l,sum;
		Series(int x,int y){
			sum=y;
			l=x;
			arr=new int[l];
		}
	void fun(int n,int s,int c){
		if(s==n-1){
			arr[s]=c;
			display();
		}
		else{
			for(int i=0;i<=c;i++){
				arr[s]=i;
				fun(n,s+1,c-i);
			}
		}
	}
	void display(){
		for(int i=0;i<l;i++){
			if(i!=0)
				cout<<" + ";
			cout<<arr[i];
		}
		cout<<" = "<<sum<<endl;
	}
	
};
int main(){
	cout<<"Enter n: ";
	int n;
	cin>>n;
	cout<<"Enter c: ";
	int c;
	cin>>c;
	Series ob(n,c);
	ob.fun(n,0,c);
}
