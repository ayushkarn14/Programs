#include <iostream>
using namespace std;
void insert(int ans[], int x, int s)
{
    int i = s;
    while (i > 1)
    {
        int p = i / 2;
        if (ans[i] < ans[p])
        {
            swap(ans[p], ans[i]);
            i = p;
        }
        else
            return;
    }
}
void getParent(int ans[])
{
    cout << ans[1] << " ";
}
void delete_root(int ans[], int size)
{
    if (size == 0)
        throw "Empty Heap";

    ans[1] = ans[size--];

    int i = 1;
    while (i < size)
    {
        int l_child_ind = 2 * i;
        int r_child_ind = 2 * i + 1;
        if (l_child_ind < size && ans[i] < ans[l_child_ind])
        {
            swap(ans[i], ans[l_child_ind]);
            i = l_child_ind;
        }
        else if (r_child_ind < size && ans[i] < ans[r_child_ind])
        {
            swap(ans[i], ans[r_child_ind]);
            i = r_child_ind;
        }
        else
            return;
    }
}
void heapSort(int arr[], int s)
{
    int *ans = new int[s];
    for (int i = 0; i < s; i++)
    {
        insert(ans, arr[i], i + 1);
    }
    for (int i = 1; i <= s; i++)
    {
        cout << ans[1] << " ";
        delete_root(ans, s);
    }
}
int main()
{
    int s;
    cout << "Enter number of elements: ";
    cin >> s;
    int *arr = new int[s + 1];
    cout << "Enter " << s << " elements :" << endl;
    arr[0] = -1;
    for (int i = 1; i <= s; i++)
        cin >> arr[i];
    heapSort(arr, s);
}