#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,y;
        cin>>n>>x>>y;
        int allbus=ceil(n/100.0)*x;
        
        int allcar=ceil(n/4.0)*y;

        int bus_for_bus_then_car=(n/100)*x;
        int car_for_bus_then_car=ceil((n%100)/4.0)*y;
        int b=bus_for_bus_then_car+car_for_bus_then_car;

        int bus_for_car_then_bus=(n/4)*x;
        int car_for_car_then_bus=ceil((n%4)/100.0)*y;
        int c=bus_for_car_then_bus+car_for_car_then_bus;

        int m=0;
        if(allbus<=allcar && allbus<=b && allbus<=c)
            m=allbus;
        else if(allcar<=allbus && allcar<=b && allcar<=c)
            m=allcar;
        else if(b<=allbus && b<=allcar && b<=c)
            m=b;
        else
            m=c;
        cout<<m<<endl;
    }
    return 0;
}