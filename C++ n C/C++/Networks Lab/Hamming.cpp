#include<cmath>
#include<iostream>
using namespace std;
bool is_power_of_2(int x){
    double n=(double)x;
    while(n>1){
        n=n/2;
    }
    if(n==1.0)
        return true;
    return false;
}
void encode(){
    //input
    cout<<"Enter number of bits in message\n";
    int m;
    cin>>m;
    int msg[m];
    cout<<"Enter message\n";
    for(int i=0;i<m;i++)
        cin>>msg[i];

    //finding number of parity bits
    int r=0;
    while(pow(2,r)<r+m+1){
        r++;
    }
    int code[m+r];


    //encoding
    int parity=0;
    int p=m-1;//index of msg...initially length of msg-1


    for(int i=m+r-1;i>=0;i--){    //inserting msg bits
        int j=m+r-i;
        if(!is_power_of_2(j)){
            code[i]=msg[p--];
        }
        else 
            code[i]=0;
    }


    for(int i=m+r-1;i>=0;i--)
    {   //inserting parity bits
        int j=m+ r-i;

        if(is_power_of_2(j))
        {
            int count=0;   // for storing sum of bits;
            for(int k=i;k>=0;k=k-j*2)
            {//loop for picking and skiping
                for(int l=k;l>k-j;l--)
                {
                    if(code[l]==1)
                        count++;
                } 
                // 1 1 0 1 1 0 1
            }
            if(count%2==1)
                parity=1;
            else
                parity=0;
            code[i]=parity;
            cout<<code[i]<<endl ;
        }
    }
    

    for(int i=0;i<m+r;i++){         //displaying coded msg
        cout<<code[i]<<" ";
    }
}
int main(){
    encode();
    // cout<<"Enter length of encoded message";
    // int n;
    // int code[n];
    // int par_len=0;
    // while(pow(2,par_len)<n){
    //     par_len++;
    // }
    // int par[par_len];
    // int ind=0;
    // for(int i=0;i<n;i++)
    //     cin>>code[i];
    // for(int i=n-1;i>=0;i--){    //inserting msg bits
    //     int j=n-i;
    //     if(is_power_of_2(j)){
    //         par[ind++]=code[i];
    //     }
    // }
    // int ans=0;
    // for(int i=0;i<par_len;i++){
    //     ans=ans+par[i]*pow(2,i);
    // }
    // cout<<ans<<endl;
}