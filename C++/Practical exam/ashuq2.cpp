#include <iostream>
#include <math.h>
#define N 10
using namespace std;
int main(int argc, char **argv)
{
int *arr=new int[N];
int i;
for(i=0;i<N;i++)
{
cout<<"Input element #"<<i<<": ";
cin>>arr[i];
}
//ordering
int imin,j;
for(i=0;i<N;i++)
{
imin=i;
for(j=i+1;j<N;j++)
if(arr[j]<arr[imin])
imin=j;
j=arr[imin];
arr[imin]=arr[i];
arr[i]=j;
}
//output:
cout<<"In ascending order: ";
for(i=0;i<N;i++)
cout<<arr[i]<<" ";
cout<<endl<<"In descending order: ";
for(i=0;i<N;i++)
cout<<arr[N-i-1]<<" ";
return 0;
}
