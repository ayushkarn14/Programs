#include <iostream>
#define inf INT16_MAX
using namespace std;
class sjf
{
public:
    bool findmin(int x, int a[], int n)
    {
        int min = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
        }
        if (min == x && min != inf)
            return true;
        else
            return false;
    }
    void findwaiting(int pid[], int bt[], int n, int tat[], int wt[])
    {
        for (int i = 0; i < n; i++)
        {
            wt[i] = tat[i] - bt[i];
        }
    }
    void findturnaround(int pid[], int bt[], int n, int tat[])
    {
        int t = 0, copy[n], c = 0; // copy -> copy of burst times
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            copy[i] = bt[i];
        }
        while (flag)
        {
            for (int i = 0; i < n; i++)
            {
                if (findmin(copy[i], copy, n))
                {
                    t = t + copy[i];
                    copy[i] = inf;
                    tat[i] = t;
                    c++;
                }
            }
            if (c == n)
                flag = false;
        }
    }
    void findaveragetime(int pid[], int bt[], int n)
    {
        double s = 0.0, avgwt, avgtat;
        int wt[n], tat[n];
        findturnaround(pid, bt, n, tat);
        findwaiting(pid, bt, n, tat, wt);

        cout << "Process_Id "
             << "Burst_Time "
             << "Waiting_Time "
             << "TurnAround_Time " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "  " << pid[i] << "     " << bt[i] << "     " << wt[i] << "     " << tat[i] << endl;
        }
        for (int i = 0; i < n; i++)
        {
            s = s + wt[i];
        }
        avgwt = s / n;
        s = 0.0;
        cout << "Average Waiting Time - " << avgwt << endl;
        for (int i = 0; i < n; i++)
        {
            s = s + tat[i];
        }
        avgtat = s / n;
        cout << "Average TurnAround Time - " << avgtat << endl;
    }
};
int main()
{
    sjf obj;
    int n;
    int pid[] = {1, 2, 3};
    int bt[] = {10, 5, 8};
    n = sizeof pid / sizeof pid[0];
    obj.findaveragetime(pid, bt, n);
}