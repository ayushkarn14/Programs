#include <bits/stdc++.h>
using namespace std;
int binsearch(int *arr,int x, int l, int h)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binsearch(arr,x, l, mid - 1);
        return binsearch(arr,x, mid + 1, h);
    }
    return -1;
}
int main(){
    int arr[]={1,2,5,6,7,23,50,123,1233,2300};
    cout<<binsearch(arr,7,0,10);
}