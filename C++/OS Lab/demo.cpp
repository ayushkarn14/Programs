#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
using namespace std;
int main()
{
    pid_t pid1, pid2;
    pid1 = fork();
    if (pid1 == 0)
    {
        pid2 = getpid();
        cout << "a = " << pid1 << endl;
        cout << "b = " << pid2 << endl;
    }
    else
    {
        pid2 = getpid();
        cout << "c = " << pid1 << endl;
        cout << "d = " << pid2 << endl;
        wait(NULL);
    }
}