#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,x,r;
        cin>>m>>x;
        m=m-1;
        list <int> :: iterator it;
        for(int j=1;j<=x;j++){
            int popper=i;
            for(int k=0;k<x;k++)
                vect.push_back(k+1);
            for(int k=1;k<=j;k++){
                int r=m%popper;
                vect.erase(r);
                popper-=1;
            }
        }
    }
}