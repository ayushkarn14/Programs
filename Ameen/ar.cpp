// input N numbers from user, and print the maximum of all
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << "enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "maximum =" << max;
}