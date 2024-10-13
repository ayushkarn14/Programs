#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
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
void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p_ind = partition(arr, low, high);
        quicksort(arr, low, p_ind - 1);
        quicksort(arr, p_ind + 1, high);
    }
}
int main()
{
    vector<int> arr = {1, 5, 1, 7, 8, 4, 23, 8, 78, 5, 22};
    quicksort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}