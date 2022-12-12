#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            for(int k=0; k<n; k++)
                cout<<1<<" ";
            cout<<endl;
        }
    }
}