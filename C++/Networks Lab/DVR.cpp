#include <iostream>
#define inf 21474836
using namespace std;
int main()
{
    cout << "Enter number of Nodes: ";
    int n;
    cin >> n;
    int t[n][n];
    cout << "Enter costs (enter -1 for infinity):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                t[i][j] = 0;
            }
            else
            {
                cout << (char)(i + 65) << " to " << (char)(j + 65) << " : ";
                cin >> t[i][j];
            }
            if (t[i][j] == -1)
                t[i][j] = inf;
            t[j][i] = t[i][j];
        }
    }
    // int t[5][5] = {{0, 3, 2, inf, inf},
    //                {3, 0, inf, 1, 4},
    //                {2, inf, 0, 3, inf},
    //                {inf, 1, 3, 0, inf},
    //                {inf, 4, inf, inf, 0}};
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << (char)(i + 65) << " Table";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (char)(i + 65) << "\t";
        for (int j = 0; j < n; j++)
        {
            if (t[i][j] == inf)
                cout << "inf"
                     << "\t";
            else
                cout << t[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    bool cond = true;
    while (cond)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j && t[i][j] == inf)
                    continue;
                for (int k = 0; k < n; k++)
                {
                    t[i][k] = min(t[i][k], t[i][j] + t[j][k]);
                }
            }
        }
        cond = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (t[i][j] == inf)
                    cond = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << (char)(i + 65) << " Table";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (char)(i + 65) << "\t";
        for (int j = 0; j < n; j++)
        {
            if (t[i][j] == inf)
                cout << "inf"
                     << "\t";
            else
                cout << t[i][j] << "\t";
        }
        cout << endl;
    }
}