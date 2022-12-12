#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3, 5, 12, 6, 8, 5, 23, 100, 40};

    int n = 9;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j != 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
