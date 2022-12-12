// tower of hanoi
#include <iostream>
using namespace std;
class Q6
{
public:
    void hanoi(int, char, char, char);
};
void Q6::hanoi(int n, char f, char t, char v)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, f, v, t);
    cout << "Move disk " << n << " from stick " << f << " to stick " << t << endl;
    hanoi(n - 1, v, t, f);
}
int main()
{
    cout << "Enter the number of disks : ";
    int nn;
    cin >> nn;
    Q6 ob;
    ob.hanoi(nn, 'A', 'B', 'C');
}