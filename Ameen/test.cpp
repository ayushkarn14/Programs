// enter a number n, and print the series till n terms
// series-> 1/1,1/2,1/3,1/4.....n terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "1 /" << i << ",";
    }
    return 0;
}