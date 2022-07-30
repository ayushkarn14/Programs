#include <iostream>

using namespace std;
void hanoi(int n,char f, char v, char t)
{
    if(n==0)
        return;
    hanoi(n-1,f,t,v);
    cout<<"Move disk "<<n<<" from "<<f<<" to "<<t<<endl;
    hanoi(n-1,v,f,t);
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}