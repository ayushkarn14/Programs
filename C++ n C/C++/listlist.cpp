#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter number of test cases";
    cin>>t;
    int op[t];
    for(int i=0;i<t;i++)
    {
        cout<<"N?";
        int n;
        cin>>n;
        if(n==1)
        {
            int pp;
            op[i]=0;
            cin>>pp;
        }
        else{
            int a[n];
            cout<<"Enter numbers";
            for (int j =0;j<n;j++){
                cin>>a[j];
            }
            int max=0;
            for(int j=0;j<n;j++)
            {
                int f=0;
                for(int k=0;k<n;k++)
                {
                    if(a[k]==a[j])
                    f++;
                }
                if(max<f)
                    {
                        max=f;
                    }
            }
            if(max==1)
                op[i]=-1;
            else
                op[i]=n-max+1;
        }
    }
    for(int i=0;i<t;i++)
    cout<<op[i]<<endl;
    return 0;
}