#include<iostream>
using namespace std;
 
int main()
{
   int num1,num2,*ptr1,*ptr2,temp;
   cout<<"Enter your numner1: ";
   cin>>num1;
   cout<<"Enter your number2: ";
   cin>>num2;
   cout<<"before swapping :\nnum1 : "<<num1<<"\nnum2 : "<<num2<<endl;
   ptr1 = &num1;
   ptr2 = &num2;

   temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
    cout<<"after swapping :\nnum1 : "<<num1<<"\nnum2 : "<<num2<<endl;
   return 0;
}