#include <iostream>
using namespace std;
void firstfit(int h[], int p[], int np, int nh)
{

    for (int i = 0; i < np; i++)
    {
        for (int j = 0; j < nh; j++)
        {
            if (h[j] >= p[i] && p[i] != -1)
            {
                cout << "Proces with size " << p[i] << " inserted to hole " << j + 1 << endl;
                h[j] -= p[i];
                p[i] = -1;
            }
        }
    }
    for (int i = 0; i < np; i++)
    {
        if (p[i] != -1)
            cout << "Process with size " << p[i] << " unable to acomodate" << endl;
    }
}
void bestfit(int h[], int p[], int np, int nh)
{
    for (int i = 0; i < np; i++)
    {
        int min = INT32_MAX;
        int to_insert = -1;
        for (int j = 0; j < nh; j++)
        {
            if (h[j] - p[i] < min && h[j] >= p[i] && p[i] != -1)
            {
                to_insert = j;
                min = h[j] - p[i];
            }
        }
        if (to_insert != -1)
        {
            cout << "Proces with size " << p[i] << " inserted to hole " << to_insert + 1 << endl;
            h[to_insert] -= p[i];
            p[i] = -1;
        }
    }
    for (int i = 0; i < np; i++)
    {
        if (p[i] != -1)
            cout << "Process with size " << p[i] << " unable to acomodate" << endl;
    }
}
void worstfit(int h[], int p[], int np, int nh)
{
    for (int i = 0; i < np; i++)
    {
        int max = -1;
        int to_insert = -1;
        for (int j = 0; j < nh; j++)
        {
            if (h[j] - p[i] > max && h[j] >= p[i] && p[i] != -1)
            {
                to_insert = j;
                max = h[j] - p[i];
            }
        }
        if (to_insert != -1)
        {
            cout << "Proces with size " << p[i] << " inserted to hole " << to_insert + 1 << endl;
            h[to_insert] -= p[i];
            p[i] = -1;
        }
    }
    for (int i = 0; i < np; i++)
    {
        if (p[i] != -1)
            cout << "Process with size " << p[i] << " unable to acomodate" << endl;
    }
}
int main()
{
    int holes[] = {10, 30, 5};
    int pro[] = {1, 10, 50, 20};
    int np = sizeof(pro) / sizeof(pro[0]);
    int nh = sizeof(holes) / sizeof(holes[0]);
    // firstfit(holes, pro, np, nh);
    // bestfit(holes, pro, np, nh);
    worstfit(holes, pro, np, nh);
}