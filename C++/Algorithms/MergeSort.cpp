#include <iostream>
using namespace std;
void mergeSort(int *a, int f, int l)
{
    if (f > l)
        return;
    int mid = (f + l) / 2;
    mergeSort(a, f, mid);
    mergeSort(a, mid + 1, l);
    merge(a, f, mid, l);
}
void merge(int *a, int f, int mid, int l)
{
    int *left;
    int *right;
    for (int i = 0; i <)
}
int main()
{
}