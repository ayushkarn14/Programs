// arrival time diff is incomplete
// make a class
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number of process" << endl;
    int n;
    cin >> n;
    int arr[n][2];
    int wait[n];
    int tt[n];
    float avg_tt = 0.0;
    float avg_wait = 0.0;
    cout << "For different arrival times enter 1" << endl;
    cout << "For same arrival time, enter 2" << endl;
    int c;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        if (c == 1)
        {
            cout << "Enter burst time for process " << i << " : ";
            cin >> arr[i][0];
            cout << "Enter arrival time for process " << i << " : ";
            cin >> arr[i][1];
        }
        if (c == 2)
        {
            cout << "Enter burst time for process " << i << " : ";
            cin >> arr[i][0];
            arr[i][1] = 0;
        }
    }
    if (c == 2)
    {
        wait[0] = 0;
        tt[0] = arr[0][0];
        avg_tt = tt[0];
        avg_wait = wait[0];
        for (int i = 1; i < n; i++)
        {
            wait[i] = wait[i - 1] + arr[i - 1][0];
            avg_wait += wait[i];
            tt[i] = wait[i] + arr[i][0];
            avg_tt += tt[i];
        }
        avg_wait /= n;
        avg_tt /= n;
    }
    if (c == 1)
    {

        int temp = 0;
        for (int i = 0; i < n - 1; i++) // sorting according to arrival times
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j][1] > arr[j + 1][1])
                {
                    swap(arr[j][0], arr[j + 1][0]);
                    swap(arr[j][1], arr[j + 1][1]);
                }
            }
        }
        wait[0] = 0;
        tt[0] = arr[0][0];
        avg_tt = tt[0];
        avg_wait = wait[0];
        for (int i = 1; i < n; i++)
        {
            wait[i] = wait[i - 1] + arr[i][0];
            avg_wait += wait[i];
            tt[i] = wait[i] + arr[i][0];
            avg_tt += tt[i];
        }
        avg_wait /= n;
        avg_tt /= n;
    }
    cout << "WT\tTT\n";
    for (int i = 0; i < n; i++)
    {
        cout << wait[i] << "\t" << tt[i] << endl;
    }
    cout << "Average wait time = " << avg_wait << endl;
    cout << "Average tt = " << avg_tt << endl;
    return 0;
}