#include <iostream>
using namespace std;

int check(int n, int x){
   if (n==1) 
   {
       return 0;
   }
   return (check(n-1, x) + x)%n;
}

int ayush(int n, int x)
{
  return check(n, x)+1;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<(ayush(a,b));
}