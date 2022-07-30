#include <bits/stdc++.h>
using namespace std;
class Box{
    int length,breath,height;
    public:
    double surfacearea();
    void print();
    double volume();
    Box operator++(int n);
    Box operator++();
    Box operator--(int n);
    Box operator--();
    Box operator=(Box b1);
    friend int operator==(Box b1,Box b2);
    int check();
    Box();
};

Box::Box(){
    cout<<"Enter the length, breath and height "<<endl;
    cin>>length>>breath>>height;
}

int Box::check(){
    if(length==breath==height)
    return 1;
    else
    return 0;
}

double Box::surfacearea(){
    if(check()==0)
    return(2*((length*breath)+(breath*height)+(height*length)));
    else
    return(6*length*length);
}

double Box::volume(){
    return(length*breath*height);
}

Box Box::operator++(){
    length++;
    breath++;
    height++;
    return(*this);
}

Box Box::operator--(int n){
    length--;
    breath--;
    height--;
    return(*this);
}

Box Box::operator++(int n){
    length++;
    breath++;
    height++;
    return(*this);
}

Box Box::operator--(){
    --length;
    --breath;
    --height;
    return(*this);
}

Box Box::operator=(Box b1){
    length=b1.length;
    breath=b1.breath;
    height=b1.height;
    return(*this);
}
int operator==(Box b1,Box b2){
    if((b1.length==b2.length) && (b1.breath==b2.breath) && (b1.height==b2.height))
    cout<<"The two boxes have equal dimensions";
    else
    cout<<"The two boxes are unequal";
}

void Box::print(){
    cout<<endl;
    cout<<"the length is "<<length<<endl;
    cout<<"the breath is "<<breath<<endl;
    cout<<"the height is "<<height<<endl;
}

int main(){
    int d=1;
    do{
        cout<<"new start"<<endl;
        Box obj;
        cout<<"enter 1 to show volume "<<endl;
        cout<<"2 for surface area"<<endl;
        cout<<"3 to increment using postfix"<<endl;
        cout<<"4 to increment using prefix"<<endl;
        cout<<"5 to decrement using postfix"<<endl;
        cout<<"enter 0 to quit"<<endl;
        cin>>d;
        if(d==1)
            cout<<"the volume is "<<obj.volume()<<endl;
        if(d==2)
            cout<<"the surface area is "<<obj.surfacearea()<<endl;
        if(d==3){
            cout<<"increment using postfix";
            obj++;
            obj.print();
        }
        if(d==4){
            cout<<"increment using prefix";
            ++obj;
            obj.print();
        }
        if(d==5){
            cout<<"decrement using postfix";
            obj--;
            obj.print();
        }
        if(d==6){
            cout<<"decrement using prefix";
            --obj;
            obj.print();
        }
        if(d==7){
            cout<<"enter the dimensions of other box";
            Box obj1;
            if(obj1==obj)
                obj1.print();
        }
        if(d==8){
            cout<<"to assign values to a box object"<<endl;
            Box b2=obj;
            b2.print();
        }
        if(d==9){
            if(obj.check()==1)
                cout<<"it is a cube "<<endl;
            else
                cout<<"it is a cuboid "<<endl;
        }
        if(d==10){
            obj.print();
        }
        cout<<"Enter 0 to quit"<<endl;
        cin>>d;
    }while(d!=0);
    return 1;
}