#include <iostream>
using namespace std;
class Q20{
      public:
             int i,m,l;
             void calculate();
             void display();
             Q20(int x,int y){
                     m=x;
                     i=y;
             }
};
void Q20::calculate(){
    l=(m-1)*i+1;
}
void Q20::display(){
     cout<<"Number of leaves = "<<l;
}
int main(){
    cout<<"Enter m: ";
    int mm;
    cin>>mm;
    cout<<"Enter i: ";
    int ii;
    cin>>ii;
    Q20 ob(mm,ii);
    ob.calculate();
    ob.display();
}
