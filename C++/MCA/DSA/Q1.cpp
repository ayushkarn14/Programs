#include <iostream>
using namespace std;
void traverse(int arr[], int top)
{
    cout << "Array : ";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insert(int arr[], int pos, int &top, int n)
{
    if (top == n - 1)
    {
        cout << "Array already full" << endl;
        return;
    }

    else if (pos > top + 1 || pos > n - 1)
    {
        // don't insert
        cout << "Invalid insertion location" << endl;
    }
    else
    {
        for (int i = top; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        top++;
        cout << "Enter element to insert: ";
        int ele;
        cin >> ele;
        arr[pos] = ele;
    }
}
void deletion(int arr[], int pos, int &top)
{
    if (top == -1)
    {
        cout << "No elements to delete" << endl;
    }
    else if (pos > top)
    {
        cout << "Invalid index to delete" << endl;
    }
    else
    {
        for (int i = pos; i <= top; i++)
        {
            arr[i] = arr[i + 1];
        }
        top--;
    }
}
int linear_search(int arr[], int &top, int ele)
{
    for (int i = 0; i <= top; i++)
    {
        if (arr[i] == ele)
            return i;
    }
    return -1;
}
int binary_search(int arr[], int l, int r, int ele)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (ele == arr[mid])
        return mid;
    if (ele < arr[mid])
        return binary_search(arr, l, mid - 1, ele);
    else
        return binary_search(arr, mid + 1, r, ele);
}
void insertion_sort(int arr[], int top)
{
    for (int i = 1; i <= top; i++)
    {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = k;
    }
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    int s;
    int top = -1;
    // bool flag = 1;
    do
    {
        cout << "Enter:" << endl;
        cout << "1:Traversal" << endl;
        cout << "2:Insert" << endl;
        cout << "3:Delete" << endl;
        cout << "4:Linear Search" << endl;
        cout << "5:Binary Search" << endl;
        cout << "6:Insertion Sort" << endl;
        cout << "-1:Terminate" << endl;
        cin >> s;
        int ind, opt, ele, pos;
        switch (s)
        {
        case 1:
            traverse(arr, top);
            break;
        case 2:
            cout << "1. Begining \n2. Location \n3. End" << endl;
            cin >> opt;
            if (opt == 1)
                insert(arr, 0, top, n);
            else if (opt == 2)
            {
                cout << "Enter position to insert: ";
                cin >> pos;
                insert(arr, pos, top, n);
            }
            else if (opt == 3)
                insert(arr, top + 1, top, n);
            break;
        case 3:
            cout << "1. Begining \n2. Location \n3. End" << endl;
            cin >> opt;
            if (opt == 1)
                deletion(arr, 0, top);
            else if (opt == 2)
            {
                cout << "Enter position to delete: ";
                cin >> pos;
                deletion(arr, pos, top);
            }
            else if (opt == 3)
                deletion(arr, top, top);
            break;
        case 4:
            cout << "Enter element to be searched: ";
            cin >> ele;
            ind = linear_search(arr, top, ele);
            if (ind == -1)
                cout << "Not found" << endl;
            else
                cout << "Found at index " << ind << endl;
            break;
        case 5:
            cout << "Enter element to be searched: ";
            cin >> ele;
            ind = binary_search(arr, 0, top, ele);
            if (ind == -1)
                cout << "Not found" << endl;
            else
                cout << "Found at index " << ind << endl;
            break;
        case 6:
            insertion_sort(arr, top);
            break;
        default:
            cout << "No array operation selected";
        }
        cout << endl;
    } while (s != -1);
    return 0;
}