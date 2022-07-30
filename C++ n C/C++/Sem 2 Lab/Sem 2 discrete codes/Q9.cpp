#include <bits/stdc++.h>
using namespace std;
class Q9
{
public:
    int *arr;
    int l, c, temp;
    void ins_sort();
    void set_values();
    void disp();
    Q9(int x)
    {
        temp = 0;
        c = 0;
        l = x;
        arr = new int[l];
    }
    ~Q9()
    {
        delete[] arr;
    }
};

void Q9::set_values()
{
    srand(time(0));
    for (int i = 0; i < l; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void Q9::ins_sort()
{
    int j = 0;
    int key;
    for (int i = 1; i < l; i++)
    {
        j = i - 1;
        int c = 0;
        key = arr[i];
        cout << "pass " << i << endl;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            c++;
        }
        arr[j + 1] = key;
        disp();
        cout << "Comparisons: " << c << endl;
    }
}
void Q9::disp()
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Enter number of values: ";
    int s;
    cin >> s;
    Q9 ob(s);
    ob.set_values();
    ob.ins_sort();
}