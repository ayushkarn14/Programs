#include <iostream>
#include <cmath>
using namespace std;
void findNumbers(int N)
{
    int i = 1;
    for (int j = i + 1; j <= sqrt(N); j++)
    {
        if (N % j == 0)
        {
            int k = N / (j);
            if (k > j && j * k == N)
            {
                cout << i << " " << j << " " << k << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int N;
        cin >> N;
        findNumbers(N);
    }
    return 0;
}
/*
    23
    1 23 1
*/