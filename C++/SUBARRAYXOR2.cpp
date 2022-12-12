#include <bits/stdc++.h>
using namespace std;

int ak(int prev, int ptr){
    for (int i=0;i<21;i++){
        if ((ptr&(1<<i))>0)
            prev^=(1<<i);
    }
    return prev;
}
int main(){
    int t;
    t = 1;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> r;
        map<int,int> s;
        s[0]=1;
        int ptr = 1;
        int prev = 0;
        for (int i=0;i<n;i++){
            while (s[ak(prev,ptr)]==1){
                ptr++;
            }
            prev = ak(prev,ptr);
            s[prev]=1;
            r.push_back(ptr);
            ptr++;
        }
    
        for (auto x:r) cout<<x<<" ";
        cout<<endl;
    }
}