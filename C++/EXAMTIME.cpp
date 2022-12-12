#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int da,db,dc,sa,sb,sc;
        cin>>da>>db>>dc>>sa>>sb>>sc;
        cout<<((da+db+dc > sa+sb+sc)?"Dragon":((da+db+dc < sa+sb+sc)?"Sloth":((da>sa)?"Dragon":((da<sa)?"Sloth":((db>sb)?"Dragon":((sb>db)?"Sloth":"Tie"))))))<<endl;
    }
}