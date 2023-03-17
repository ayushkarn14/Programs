#include <iostream>
using namespace std;
int get_max(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
void CountSort(int *arr, int n)
{
    int max = get_max(arr, n);
    int freq[max + 1];
    for (int i = 0; i <= max; i++)
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
int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " numbers : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    CountSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}