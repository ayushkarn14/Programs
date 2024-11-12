#include <iostream>
using namespace std;

void merge(int *a, int f, int mid, int l)
{
    int b[l - f + 1];
    int i = f;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= l)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        b[k++] = a[i++];
    }

    while (j <= l)
    {
        b[k++] = a[j++];
    }

    for (int i = 0; i < l - f + 1; i++)
    {
        a[f + i] = b[i];
    }
}

void mergeSort(int *a, int f, int l)
{
    if (f < l)
    {
        int mid = f + (l - f) / 2;
        mergeSort(a, f, mid);
        mergeSort(a, mid + 1, l);
        merge(a, f, mid, l);
    }
}

// quicksort
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
            i++;
        while (arr[j] >= pivot && j > low)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Entered elements: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int ch;
    while (true)
    {
        cout << "\nChoose sorting method:\n";
        cout << "1. Merge Sort\n";
        cout << "2. Quick Sort\n";
        cout << "-1. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            mergeSort(arr, 0, n - 1);
            cout << "Array sorted using Merge Sort:\n";
            printArray(arr, n);
            break;

        case 2:
            quickSort(arr, 0, n - 1);
            cout << "Array sorted using Quick Sort:\n";
            printArray(arr, n);
            break;

        case -1:
            cout << "Exiting";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
