#include <iostream>
using namespace std;
class Q18{
	public:
		int n,l;
		char s,d;
		char *arr;
		int **mat;
		int **pro;
		int **proans;
		void input();
		void multiply();
		void display();
		Q18(int x){
			n=x;
			arr=new char[n];
			
			mat=new int*[n];
			for(int i=0;i<n;i++)
				mat[i]=new int[n];
				
			pro=new int*[n];
			for(int i=0;i<n;i++)
				pro[i]=new int[n];
			
			proans=new int*[n];
			for(int i=0;i<n;i++)
				proans[i]=new int[n];
		}
};
void Q18::input(){
	cout<<"Enter the elements in set"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cout<<"Enter number of edges between "<<arr[i]<<" and "<<arr[j]<<" : ";
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j)
				mat[i][j]=mat[j][i];
		}
	}
	cout<<"Enter source : ";
	cin>>s;
	cout<<"Enter destination : ";
	cin>>d;
	cout<<"Enter length of path : ";
	cin>>l;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			pro[i][j]=mat[i][j];
	}
}

void Q18::multiply(){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			proans[i][j]=0;
			for(int k=0;k<n;k++)
				proans[i][j]+=mat[i][k]*pro[k][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			pro[i][j]=proans[i][j];
	}
}

void Q18::display(){
	int x,y;
	for(int i=0;i<n;i++){
		if(s==arr[i])
			x=i;
		if(d==arr[i])
			y=i;
	}
	cout<<"Number of paths = "<<pro[x][y];
}
int main(){
	cout<<"Enter number of elements in set: ";
	int nn;
	cin>>nn;
	Q18 ob(nn);
	ob.input();
	for(int i=0;i<ob.l-1;i++)
		ob.multiply();
	ob.display();
}
