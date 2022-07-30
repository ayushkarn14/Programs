#include <iostream>
#include <cmath>
using namespace std;
class Q1{
    public:
        int l,car;
        int *arr;
        int *un;
        Q1(int x){
            l=x;
            arr=new int[l];
            un=new int[l];
        }
        ~Q1(){
            delete[] arr;
        }
        void input();
        int buildSet();
        void isMember(int);
        void powerSet();
};
void Q1::input(){
    cout<<"Enter the elements in the set"<<endl;
    for(int i=0;i<l;i++)
        cin>>arr[i];
}
int Q1::buildSet(){
    int c=0;
    bool f=false;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(arr[i]==un[j]){
                f=true;
                break;
            }
        }
        if(!f){
            un[c++]=arr[i];
        }
    }
    delete[] arr;
    arr=new int[c];
    for(int i=0;i<c;i++)
        arr[i]=un[i];
    delete[] un;
    l=c;
    return l;
}
void Q1::powerSet(){
    for(int i=0;i<pow(2,l);i++){
        int a=0;
        cout<<"{";
        for(int j=0;j<l;j++){
            if(i&(1<<j)){
                if(a!=0)
                cout<<", ";
                cout<<arr[j];
                a=1;
            }
        }
        cout<<"}"<<endl;
    }
}
void Q1::isMember(int x){
    for(int i=0;i<l;i++){
        if(arr[i]==x){
            cout<<"A member";
            return;
        }
    }
    cout<<"Not a member";
}
int main(){
    int nn;
    cout<<"Enter the number of elements in the set: ";
    cin>>nn;
    Q1 ob(nn);
    ob.input();
    cout<<"Cardinality = "<<ob.buildSet()<<endl;
    ob.powerSet();
    cout<<"Enter number to be searched: ";
    int s;
    cin>>s;
    ob.isMember(s);
}