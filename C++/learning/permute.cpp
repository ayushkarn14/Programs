#include<iostream>
using namespace std;
class permute{
    public:
    char *ch;
    char *data;
    void per_no_rep(char* a,int l,int r){
        if(l==r)
            cout<<a<<endl;
        else{
            for(int i=l;i<=r;i++){
                swap(a[l],a[i]);
                per_no_rep(a,l+1,r);
                swap(a[l],a[i]);
            }
        }
    }
    void per_rep(char *a,char *data, int r, int ind){
        for(int i=0;i<=r;i++){
            data[ind]=a[i];
            if(ind == r)
                cout << data<<endl;
            else
                per_rep(a,data,r,ind+1);
        }
    }
    void start(){
        
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int size = str.size();
    ch=new char[size];
    data=new char[size];
    for(int i=0;i<size;i++)
        ch[i]=str[i];
    cout<<"No rep"<<endl;
    per_no_rep(ch,0,size-1);
    cout<<"Rep"<<endl ;
    per_rep(ch,data,size-1,0);
    }
};
int main(){
    permute ob;
    ob.start();
}