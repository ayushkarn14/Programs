// ans is coming 1 or -1
#include <iostream>
using namespace std;

int main()
{
    const int m = 2, n = 5;
    int c = 0;
    int arr[m][n] = {{2, 1, 1, 1, 1}, {1, 0, 2, 0, 0}};
    bool f = false;
    while (true)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 2)
                {
                    if (j > 0 && arr[i][j - 1] == 1)
                    {
                        arr[i][j - 1] = 2;
                        f = true;
                    }
                    if (j < n - 1 && arr[i][j + 1] == 1)
                    {
                        arr[i][j + 1] = 2;
                        f = true;
                    }
                    if (i > 0 && arr[i - 1][j] == 1)
                    {
                        arr[i - 1][j] = 2;
                        f = true;
                    }
                    if (i < m - 1 && arr[i + 1][j] == 1)
                    {
                        arr[i + 1][j] = 2;
                        f = true;
                    }
                }
            }
        }
        if (!f)
            break;
        c++;
        f = false;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                c = -1;
                break;
            }
        }
    }
    cout << "Number of days = " << c << "\n";
}