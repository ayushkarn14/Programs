#include <iostream>
#include "Soumya.cpp"
using namespace std;
class Ayush
{
};
int main()
{
    cout << "enter side : ";
    int side;
    cin >> side;
    Soumya ob(side);
    ob.area();
    cout << ob.ans;
}