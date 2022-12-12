#include <bits/stdc++.h>
using namespace std;
class Q1
{
    int *arr;
    int l;
    int *un;
    int c;

public:
    void input();
    void build_set();
    void display();
    void powerset();
    void ismember();
    Q1(int size)
    {
        arr = new int[size];
        un = new int[size];
        l = size;
    }
};
void Q1::ismember()
{
    int s, f = 0;
    cout << "Enter the element to be searched : ";
    cin >> s;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == s)
        {
            cout << "Yes, " << s << " is a member of set" << endl;
            f = 1;
        }
    }
    if (f == 0)
        cout << "No," << s << " is not a member of set" << endl;
    cout << endl;
}
void Q1::powerset()
{
    for (int i = 0; i < pow(2, l); i++)
    {
        int aa = 0;
        cout << "{";
        for (int j = 0; j < l; j++)
        {
            if (i & (1 << j))
            {
                if (aa != 0)
                    cout << ",";
                cout << arr[j];
                aa += 1;
            }
        }
        cout << "}" << endl;
    }
    cout << endl;
}
void Q1::input()
{
    cout << "Enter the elements in array" << endl;

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
}
void Q1::build_set()
{
    int c = 0;
    for (int i = 0; i < l; i++)
    {
        int f = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i] == un[j])
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            un[c] = arr[i];
            c++;
        }
    }
    delete[] arr;
    arr = new int[c];
    for (int i = 0; i < c; i++)
        arr[i] = un[i];
    delete[] un;
    l = c;
}
void Q1::display()
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Cardinality = " << l << endl;
}
int main()
{
    cout << "Enter size of array: ";
    int len;
    cin >> len;
    Q1 ob(len);
    ob.input();
    ob.build_set();
    ob.display();

    while (true)
    {
        cout << "1 for powerset, 2 to search and 0 to end program" << endl;
        int c = 0;
        cin >> c;
        if (c == 1)
        {
            ob.powerset();
        }
        else if (c == 2)
        {
            ob.ismember();
        }
        else if (c == 0)
            break;
        else
            cout << "Enter correct choice";
    }
}