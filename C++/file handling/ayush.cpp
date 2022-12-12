#include <bits/stdc++.h>
using namespace std;

const int m=3;
const int n=4;
int A[m][n];
void read(int A[][n],int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>A[j][i];
    }
}
void findSubtotals(int A1[n]){

    int t=0;
    int op[n];
    for(int i=0;i<n;i++){
        t += A1[i];
        op[i] = t;
    }
    cout<<"Sum array of rows: "<<endl;
    for(int j=0;j<n;j++)
    cout<<op[j]<<" ";
    cout<<endl;
}
int checkskewsymmetric(int A[][n], int m,int n){
    int tr[m][n];
    int f=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            tr[i][j]=0-A[j][i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            if(tr[i][j]!=A[i][j])
                f++;
    }
    if(f==0)
        return 1;
    else
        return 0;
}
void displayEven(int A[][n], int m, int n){
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            if(A[i][j]%2==0)
                cout<<A[i][j]<<", ";
    }
}
int main(){
    cout<<"Enter array elements";
    read(A,m,n);
    cout<<"Array entered: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    int arr[n];
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr[j]=A[i][j];
    }
    findSubtotals(arr);
    }
    try{
        if(m!=n)
            throw -1;
        else
        {
        if(checkskewsymmetric(A,m,n)==1)
            cout<<"Array is skewsymmetric"<<endl;
        else
            cout<<"Array is not skewsymmetric"<<endl;
        }
    }
    catch(int& negerror){
        cout<<"Invalid array"<<endl;
    }
    displayEven(A,m,n);
}