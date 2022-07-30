#include <bits/stdc++.h>
using namespace std;
class SET
{
    int size;
    int *arr = new int[size];

public:
    void input();
    void display();
    void car();
    void powerset();
    void ismember();
};
void SET::ismember()
{
    int s, f = 0;
    cout << "Enter the element to be searched : ";
    cin >> s;
    for (int i = 0; i < size; i++)
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
void SET::input()
{
    cout << "Enter cardinality of set :";
    cin >> size;
    cout << "Enter the elements of the set" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << endl;
}
void SET::display()
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "}";
    cout << endl;
}
void SET::powerset()
{
    for (int i = 0; i < pow(2, size); i++)
    {
        int aa = 0;
        cout << "{";
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                if (aa != 0)
                    cout << ",";
                cout << arr[j];
                aa++;
            }
        }
        cout << "}" << endl;
    }
    cout << endl;
}
void SET::car()
{
    cout << "Cardinality of power set = " << pow(2, size) << endl;
    cout << endl;
}

int main()
{
    SET ob;
    ob.input();
    while (true)
    {
        cout << "Enter 1 for cardinality, 2 for powerset, 3 to search and 0 to end program" << endl;
        int c = 0;
        cin >> c;
        if (c == 1)
        {
            ob.car();
        }
        else if (c == 2)
        {
            ob.powerset();
        }
        else if (c == 3)
        {
            ob.ismember();
        }
        else if (c == 0)
            break;
        else
            cout << "Enter correct choice";
    }
    return 0;
}
/*
123
000->{}
001->{3}
010->{2}
011->{2,3}
100->{1}
101->{1,3}
110->{1,2}
111->{1,2,3}
*/