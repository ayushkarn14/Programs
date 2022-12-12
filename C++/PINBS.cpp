
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin>>str;
    size_t found2 = str.find("10");
    size_t found3 = str.find("11");
    if (found2!=string::npos)
        cout<<"YES"<<endl;
    else if(found3!=string::npos)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
