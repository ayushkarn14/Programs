#include<iostream>
using namespace std;
void alter(int &c, int &d){
    int t = c;
    c = d;
    d = t;
}

int main(){
    int a,b;
    cout<<"enter values of a and b : ";
    cin >> a >> b;
    cout<<"before swaping \n";
    cout << "a : "<< a << "\nb : " << b;
    alter(a, b);
    cout<<"\nafter swaping \n";
    cout << "a : "<< a << "\nb : " << b;
    return 0;
}