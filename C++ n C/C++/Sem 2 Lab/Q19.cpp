#include <iostream>
using namespace std;
class Q19{
    public:
        int **mat;
        int *deg;
        int d;
        void input();
        void display();
        bool check_circuit();
        bool check_path();

        Q19(int x){
            d=x;
            deg = new int[d];
            mat=new int*[d];
            for(int i=0;i<d;i++){
                mat[i]=new int[d];
            }
        }
};
void Q19::display(){
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Q19::check_circuit(){
    for(int i=0;i<d;i++){
        int sum=0;
        for(int j=0;j<d;j++){
            sum+=mat[i][j];
        }
        deg[i]=sum;
    }
    int c=0;
    for(int i=0;i<d;i++){
        if(deg[i]%2==0)
            c++;
    }
    if(c==d)
        return true;
    else
        return false;
}
bool Q19::check_path(){
    for(int i=0;i<d;i++){
        int sum=0;
        for(int j=0;j<d;j++){
            sum+=mat[i][j];
        }
        deg[i]=sum;
    }
    int c=0;
    for(int i=0;i<d;i++){
        if(deg[i]%2!=0)
            c++;
    }
    if(c==2)
        return true;
    else
        return false;
}
void Q19::input(){
    for(int i=0;i<d;i++){
        for(int j=i;j<d;j++){
            cout<<"Enter number of edges between "<<(char)(i+65)<<" and "<<(char)(j+65)<<" : ";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            if(j<i){
                mat[i][j]=mat[j][i];
            }
        }
    }
}
int main(){
    cout<<"Enter the number of vertices ";
    int v;
    cin>>v;
    Q19 ob(v);
    ob.input();
    ob.display();
    if(ob.check_circuit())
        cout<<"Has a Euler Circuit"<<endl;
    else
        cout<<"Does not have a Euler circuit"<<endl;
    if(ob.check_path() || ob.check_circuit())
        cout<<"Has a Euler path"<<endl;
    else
        cout<<"Does not has a Euler path"<<endl;
}