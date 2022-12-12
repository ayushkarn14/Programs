#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 12, 6, 8, 5, 23, 100, 40};
    int l = 9;
    for (int i = 0; i < l; i++)
    {
        int min = i;
        for (int j = i + 1; j < l; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
    for (int i = 0; i < l; i++)
        cout << arr[i] << " ";
    cout << endl;
}