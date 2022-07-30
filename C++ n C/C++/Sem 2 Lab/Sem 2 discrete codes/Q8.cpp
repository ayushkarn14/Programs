// Take number of elements from user and generate random inputs
#include <bits/stdc++.h>
using namespace std;
class Q8
{
public:
    int *arr;
    int l, temp, c;
    void bub_sort();
    void set_values();
    Q8(int x)
    {
        temp = 0;
        c = 0;
        l = x;
        arr = new int[l];
    }
    ~Q8()
    {
        delete[] arr;
    }
};
void Q8::set_values()
{
    srand(time(0));
    for (int i = 0; i < l; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}
void Q8::bub_sort()
{
    int cc = 0;
    for (int i = 0; i < l - 1; i++)
    {
        cc = 0;
        for (int j = 0; j < l - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c++;
                cc++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int j = 0; j < l; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "   No. of swaps = " << cc;
        cout << endl;
    }
    cout << "Total Number of Swaps = " << c << endl;
}
int main()
{
    cout << "Enter number of elements = ";
    int size;
    cin >> size;
    Q8 ob(size);
    ob.set_values();
    ob.bub_sort();
}