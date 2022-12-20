#include <iostream>
using namespace std;
class Process
{
public:
    int bt;
    int pid;
    int tat;
    int wt;
    Process(int id = 0, int b = 0)
    {
        pid = id;
        bt = b;
        tat = -1;
        wt = -1;
    }
};
class heap
{
public:
    Process arr[50];
    int size;
    heap()
    {
        arr[0].pid = -1;
        arr[0].bt = -1;
        size = 0;
    }
    void insert(int pid, int bt)
    {
        if (size == 50)
            throw "Heap Full";
        Process t(pid, bt);
        arr[++size] = t;
        int i = size;
        while (i > 1)
        {
            int p = i / 2;
            if (arr[p].bt > arr[i].bt)
            {
                swap(arr[p], arr[i]);
                i = p;
            }
            else
                return;
        }
    }
    Process top()
    {
        if (size == 0)
            throw "Empty Heap";
        return arr[1];
    }
    void delete_root()
    {
        if (size == 0)
            throw "Empty Heap";

        arr[1] = arr[size--];

        int i = 1;
        while (i < size)
        {
            int l_child_ind = 2 * i;
            int r_child_ind = 2 * i + 1;
            if (l_child_ind < size && arr[i].bt > arr[l_child_ind].bt)
            {
                swap(arr[i], arr[l_child_ind]);
                i = l_child_ind;
            }
            else if (r_child_ind < size && arr[i].bt > arr[r_child_ind].bt)
            {
                swap(arr[i], arr[r_child_ind]);
                i = r_child_ind;
            }
            else
                return;
        }
    }

    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i].bt << " ";
        }
        cout << endl;
    }

    void calculate()
    {
        arr[1].wt = 0;
        arr[1].tat = arr[1].bt;

        int prev_wt = 0;
        int prev_bt = arr[1].bt;

        delete_root();

        int sum_wt = 0;
        int sum_tat = arr[1].tat;

        while (size != 0)
        {
            arr[1].wt = prev_wt + prev_bt;
            sum_wt += arr[1].wt;

            arr[1].tat = arr[1].wt + arr[1].bt;
            sum_tat += arr[1].tat;

            prev_wt = arr[1].wt;
            prev_bt = arr[1].bt;
            delete_root();
        }
        cout << "Sum of waiting waiting time = " << sum_wt << endl;
        cout << "Sum of turn around time = " << sum_tat << endl;
    }
};
int main()
{
    heap h;
    cout << "Enter number of processes: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter burst time of PID=" << i << " : ";
        int bt;
        cin >> bt;
        h.insert(i, bt);
    }
    h.calculate();
}