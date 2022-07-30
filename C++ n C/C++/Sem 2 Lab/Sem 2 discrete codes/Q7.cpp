#include <iostream>
using namespace std;
class Q7
{
public:
    int l;
    int *arr;
    int n;
    int binsearch(int, int, int);
    void input();
    Q7(int x)
    {
        l = x;
        arr = new int[l];
    }
    ~Q7()
    {
        delete[] arr;
    }
};
void Q7::input()
{
    cout << "Enter elements in ascending order" << endl;

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
}
int Q7::binsearch(int x, int l, int h)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binsearch(x, l, mid - 1);
        return binsearch(x, mid + 1, h);
    }
    return -1;
}
int main()
{
    cout << "Enter number of elements: ";
    int ele;
    cin >> ele;
    Q7 ob(ele);
    ob.input();
    cout << "Enter element to be searched : ";
    int xx;
    cin >> xx;
    cout << ob.binsearch(xx, 0, ele - 1);
}