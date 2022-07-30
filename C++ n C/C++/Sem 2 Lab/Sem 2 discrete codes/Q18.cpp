#include <iostream>
using namespace std;
class Q18{
    public:
        int v,len;
        char s,d;
        int **mat;
        int **pro;
        int **proans;
        Q18(int x){
            v=x;
            mat=new int *[v];
            for(int i=0;i<v;i++)
                mat[i]=new int[v];

            proans=new int *[v];
            for(int i=0;i<v;i++)
                proans[i]=new int[v];

            pro=new int *[v];
            for(int i=0;i<v;i++)
                pro[i]=new int[v];

            for(int i=0;i<v;i++){
                for(int j=0;j<v;j++)
                    pro[i][j]=0;
            }

            for(int i=0;i<v;i++){
                for(int j=0;j<v;j++)
                    proans[i][j]=0;
            }
        }
        void multiply();
        void input();
        void operating();
};
void Q18::input(){
    cout<<"Enter the data for adjacency matrix"<<endl;
    for(int i=0;i<v;i++){
        for(int j=i;j<v;j++){
            cout<<"Enter number of edges between "<<(char)(i+65)<<" and "<<(char)(j+65)<<" : ";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(j<i){
                mat[i][j]=mat[j][i];
            }
        }
    }
    cout<<"Enter source (cap letter): ";
    cin>>s;
    cout<<"destination vertices:";
    cin>>d;
    cout<<"Enter length of path";
    cin>>len;
}
void Q18::multiply(){
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            proans[i][j]=0;
            for (int k = 0; k < v; k++) {
                proans[i][j] += mat[i][k] * pro[k][j];
            }
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++)
            pro[i][j]=proans[i][j];
    }
}
void Q18::operating(){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++)
            pro[i][j]=mat[i][j];
    }
    for(int i=1;i<len;i++)
        multiply();
    cout<<"Number of paths of length "<<len<<" = ";
    if(len==1){
        cout<<mat[(int)s-65][(int)d-65];
}    else
        cout<<proans[(int)s-65][(int)d-65];
}
int main(){
    cout<<"Enter the number of vertices: ";
    int n;
    cin>>n;
    Q18 ob(n);
    ob.input();
    ob.operating();
}