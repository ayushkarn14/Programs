#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0};
    int *ptr = arr;
    cout << "Enter 10 integers : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    ptr--;
    cout << "Array in descending order : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << *ptr << " ";
        ptr--;
    }
    ptr++;
    cout << endl;
    cout << "Array in ascending order : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}