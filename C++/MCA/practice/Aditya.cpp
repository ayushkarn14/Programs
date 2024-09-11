#include <iostream>
using namespace std;

void TraversalOfarray(int array[], int size)
{
    cout << "Traversal of Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int InsertionOnarray(int array[], int &size)
{
    // int choice;
    cout << "_ Insertion _" << endl;
    int newval1, pos;
    cout << "enter the element you want to insert :";
    cin >> newval1;
    cout << endl;
    cout << "enter the position : ";
    cin >> pos;
    cout << endl;
    cout << "After Insertion :" << endl;
    if (size > 50)
    {
        return -1;
    }
    for (int i = size - 1; i >= pos; i--)
    {
        array[i + 1] = array[i];
    }
    array[pos] = newval1;
    size++;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 1;
}

void deletion(int array[], int &size)
{
    int pos;
    cout << "_ Deletion _" << endl;
    cout << "Enter the value index you want to delete : ";
    cin >> pos;
    cout << endl;
    cout << "After deletion :" << endl;
    for (int i = pos; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
// 1 2 3 4 5
// 0 1 2 3 4

void LinearSearch(int array[], int size)
{
    int ele;
    cout << "_ LinearSearch _" << endl;
    cout << "Enter the element you want to search :";
    cin >> ele;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == ele)
        {
            cout << "Element at index :" << i << endl;
        }
    }
}

void insertionSort(int array[], int size)
{
    cout << "_ InsertionSort _" << endl;
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (current < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
    cout << "Array after sorting :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int BinarySearch(int array[], int size)
{
    // first sort the array
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (current < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
    // Binary Search
    cout << "_ BinarySearch __" << endl;
    int s = 0, e = size, ele;
    cout << "Enter the element you want to search :";
    cin >> ele;
    cout << endl;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == ele)
        {
            return mid;
        }
        else if (array[mid] < ele)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, choice;
    cout << "Enter the size of the array :";
    cin >> size;
    int arr[50];
    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "__ Menu Driven Program __" << endl;
    cout << "1 -> Traverse on array." << endl;
    cout << "2 -> Insert elements in array." << endl;
    cout << "3 -> Deletion on array." << endl;
    cout << "4 -> Linear Search." << endl;
    cout << "5 -> Binary Search." << endl;
    cout << "6 -> Insertion sort." << endl;
    cout << "7 -> Exit. " << endl;

    while (choice != 7)
    {
        cout << "Enter your choice : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            TraversalOfarray(arr, size);
            break;
        case 2:
            InsertionOnarray(arr, size);
            break;
        case 3:
            deletion(arr, size);
            break;
        case 4:
            LinearSearch(arr, size);
            break;
        case 5:
            cout << BinarySearch(arr, size);
            break;
        case 6:
            insertionSort(arr, size);
            break;
        default:
            cout << "Enter valid choice." << endl;
        }
        cout << endl;
    }

    return 0;
}