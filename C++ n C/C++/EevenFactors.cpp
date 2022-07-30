#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    if(n==2)
        return 1;
    int c=0;
    if (n % 2 != 0)
        return 0;
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            c++;
            n = n / i;
        }
    }
  
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}