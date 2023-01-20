/*write a program to enter N number form the user and print the second largest of all
Sample:
input: 1, 4, 4 ,5 ,5 , 6 ,4 , 7 ,7
output: 6
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << "enter " << n << "number";
    int a[n];
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

    int m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (m < a[i] && a[i] != max)
        {
            m = a[i];
        }
    }
    cout << "Second max = " << m;

    return 0;
}