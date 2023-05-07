// not done
#include <iostream>
using namespace std;

int Partition(int arr[], int l, int h)
{
    srand(time(0));
    int r = rand() % (h - l) + l;
    int pivot = r;
    int i = l;
    int j = h;
    while (i < j)
    {
        while (arr[i] <= arr[pivot])
            i++;
        while (arr[j] > arr[pivot])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[pivot]);
    return j;
}
void QuickSort(int *arr, int l, int h)
{
    if (l < h)
    {
        int pivot = Partition(arr, l, h);
        QuickSort(arr, l, pivot - 1);
        QuickSort(arr, pivot + 1, h);
    }
}
int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " numbers : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}