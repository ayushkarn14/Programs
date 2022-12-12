#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int zz = 0; zz < t; zz++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 || b==1){
            cout<<"No\n";
        }
        else{

        if(a%2==1 && b%2==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
        }
    }
}