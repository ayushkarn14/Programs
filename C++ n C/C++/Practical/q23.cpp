#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
    private:
        float a=0,b=0,c=0,h=0;
    public:
        Triangle(){
        }
        Triangle (float a, float b, float c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        Triangle(float b, float h){
            this->b=b;
            this->h=h;
        }
        float area(){
            return area(this->a,this->b,this->c);
        }
        float area(float a,float b,float c){
            float s = (a+b+c)/2;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }
        float area(float b,float h){
            return (b*h)/2;
        }
        void operator = (Triangle triangle){
            this->a=triangle.a;
            this->b=triangle.b;

            this->c=triangle.c;
        }
        bool operator == (Triangle triangle){
            return (this->a==triangle.a && this->b==triangle.b && this->c==triangle.c);
        }
};

int main(){
    Triangle t1(2,3,4),t2(4,5),t3;
    t3 = t1;
    if (t1==t3)
    cout<<"t3 and t1 are similar\n";
    Triangle t4(2,3,4);
    if (t4 == t1)
    cout<<"t4 and t2 are similar\n";
    return 0;
}