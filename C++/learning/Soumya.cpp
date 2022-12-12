#include <iostream>
using namespace std;
class Soumya
{
public:
    int ans;
    int s;
    void area()
    {
        ans = s * s;
    }
    Soumya(int x)
    {
        s = x;
        ans = 0;
    }
};
// int main()
// {
//     int c;
//     cout << "Enter s for 1st object" << endl;
//     cin >> c;
//     Soumya ob1(c);
//     cout << endl;
//     cout << "Enter s for 2nd object" << endl;
//     cin >> c;
//     Soumya ob2(c);
//     cout << endl;

//     cout << "Side of 1st object = " << ob1.s << endl;
//     cout << "Side of 2nd object = " << ob2.s << endl;

//     ob1.area();
//     cout << "Area of 1st square = " << ob1.ans << endl;

//     ob2.area();
//     cout << "Area of 2nd square = " << ob2.ans;
// }