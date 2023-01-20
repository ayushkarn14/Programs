#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *arr = new int(10);
//	for(int i=0; i<10; i++)
//		arr[i] = i+1;
	
//	for(int i=0; i<10; i++)
//		cout<<arr[i]<<"  ";
	cout<<endl;

	delete[] arr ;

//	for(int i=0; i<10; i++)
//		cout<<arr[i]<<"  ";

	return 0;
}
