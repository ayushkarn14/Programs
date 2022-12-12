#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"from here";
    for(int i = 0; i<10000; i++)
      { int randNum = rand()%(100000-2 + 1) + 2;
        cout<<randNum<<" ";
      }
    return 0;
}