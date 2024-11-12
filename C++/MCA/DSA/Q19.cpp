#include <iostream>
#include <cmath>
using namespace std;

#define MAX_SIZE 100
int get_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
// heap
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
// count
void countSort(int arr[], int n)
{
    int max = get_max(arr, n);
    int freq[max + 1];
    for (int i = 0; i < max + 1; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (int i = 1; i <= max; i++)
        freq[i] = freq[i - 1] + freq[i];

    int out[n];
    for (int i = n - 1; i >= 0; i--)
    {
        int j = arr[i];
        freq[j]--;
        out[freq[j]] = j;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = out[i];
    }
}
// radix
void countSortByDigit(int arr[], int n, int exp)
{
    int output[n];
    int freq[10] = {0};

    for (int i = 0; i < n; i++)
        freq[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        freq[i] += freq[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (arr[i] / exp) % 10;
        output[--freq[digit]] = arr[i];
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n)
{
    int max = get_max(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10)
        countSortByDigit(arr, n, exp);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    int ch;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "1. Heap Sort\n";
        cout << "2. Count Sort\n";
        cout << "3. Radix Sort\n";
        cout << "-1. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            heapSort(arr, n);
            cout << "Sorted array using Heap Sort:\n";
            display(arr, n);
            break;
        case 2:
            countSort(arr, n);
            cout << "Sorted array using Count Sort:\n";
            display(arr, n);
            break;
        case 3:
            radixSort(arr, n);
            cout << "Sorted array using Radix Sort:\n";
            display(arr, n);
            break;
        case -1:
            cout << "Exiting\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
        cout << "Enter " << n << " elements again: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

    } while (ch != -1);

    return 0;
}
