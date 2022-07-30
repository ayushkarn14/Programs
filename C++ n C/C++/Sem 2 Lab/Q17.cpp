#include <iostream>
using namespace std;
class Q17{
    public:
        int **mat;
        int *in;
        int *out;
        int d;
        void input();
        void display();
        void compute_deg();
        void disp_deg();

        Q17(int x){
            d=x;
            in = new int[d];
            out = new int[d];
            mat=new int*[d];
            for(int i=0;i<d;i++){
                mat[i]=new int[d];
            }
        }
};
void Q17::display(){
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Q17::disp_deg(){
    cout<<"In-degrees : "<<endl;
    for(int i=0;i<d;i++)
        cout<<(char)(i+65)<<" : "<<in[i]<<endl;
    cout<<endl;
    cout<<"Out-degrees : "<<endl;
    for(int i=0;i<d;i++)
        cout<<(char)(i+65)<<" : "<<out[i]<<endl;
}
void Q17::compute_deg(){
    for(int i=0;i<d;i++){
        int sum=0;
        for(int j=0;j<d;j++){
            sum+=mat[i][j];
        }
        out[i]=sum;
    }
    for(int j=0;j<d;j++){
        int sum=0;
        for(int i=0;i<d;i++){
            sum+=mat[i][j];
        }
        in[j]=sum;
    }
}
void Q17::input(){
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
    Q17 ob(v);
    ob.input();
    ob.display();
    ob.compute_deg();
    ob.disp_deg();
}