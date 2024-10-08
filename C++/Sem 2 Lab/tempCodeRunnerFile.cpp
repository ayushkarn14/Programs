#include <iostream>
using namespace std;
class Q15{
    public:
        int d;
        int *coeff;
        int calculate(int);
        void enter_coefficient();
        void display();
        Q15(int x){
            d=x;
            coeff=new int[d+1];
        }
        ~Q15(){
            delete[] coeff;
        }    
};  
void Q15::display(){
    for(int i=d;i>=0;i--){
        cout<<coeff<<"x^"<<i<<" +";
    }
}
int Q15::calculate(int x){
    int ans;
    for(int i=0;i<=d;i++){
        ans+=coeff[i]*pow(x,i);
    }
    return ans;
}
void Q15::enter_coefficient(){
    for(int i=d;i>=0;i--){
    cout<<"Enter the coefficient of x^"<<i<<" : ";
    cin>>coeff[i];
    }
}
int main(){
    cout<<"Enter the degree of polynomial";
    int dd;
    cin>>dd;
    Q15 ob(dd);
    ob.enter_coefficient();
    ob.display();
    cout<<"Enter the value of 'x': ";