#include <iostream>
using namespace std;
class Q16{
    public:
        int **mat;
        int d;
        void input();
        void display();
        bool check_complete();

        Q16(int x){
            d=x;
            mat=new int*[d];
            for(int i=0;i<d;i++){
                mat[i]=new int[d];
            }
        }
};
void Q16::display(){
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Q16::check_complete(){
    bool f=true;
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            if(i!=j){
                if(mat[i][j]==0)
                    f=false;
            }
        }
    }
    return f;
}
void Q16::input(){
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cout<<"Enter number of edges from "<<(char)(i+65)<<" to "<<(char)(j+65)<<" : ";
            cin>>mat[i][j];
        }
    }
}
int main(){
    cout<<"Enter the number of vertices ";
    int v;
    cin>>v;
    Q16 ob(v);
    ob.input();
    ob.display();
    if(ob.check_complete())
        cout<<"Complete graph"<<endl;
    else
        cout<<"Not a complete graph"<<endl;
}