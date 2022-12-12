//not done
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int zz = 0; zz < t; zz++)
    {
        int z=0,o=0,ans=0;
        int l;
        cin>>l;
        string s;
        cin>>s;
        if(l<=2){
            cout<<s<<endl;
        }
        else{

        for(int i=0;i<l;i++){
            if(s[i]=='1'){
                o++;
            }
            if(s[i]=='0'){
                z++;
            }
        }
        for(int i=0;i<z;i++)
            cout<<0;
        for(int i=0;i<o;i++)
            cout<<1;
        cout<<endl;
        }
    }
}
