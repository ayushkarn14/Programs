#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
using namespace std;
int main()
{
    int c;
    cout << "Enter your choice: ";
    cin >> c;
    if (c == 1)
    {
        pid_t pid, p;
        p = fork();
        pid = getpid();
        if (p < 0)
        {
            cout << stderr << "Fork failed" << endl;
            return 1;
        }
        cout << "Fork id: " << p << endl;
        cout << "Process id: " << pid << endl;
        return 0;
    }
    else if (c == 2)
    {
        int pid;
        pid = fork();
        if (pid < 0)
        {
            cout << "Fork failed" << endl;
            exit(1);
        }
        else if (pid == 0)
        {
            cout << "This is child process" << endl;
            cout << "Pid of child process" << getpid() << endl;
            execlp("bin/ls", "ls", NULL);
            exit(0);
        }
        else
        {
            cout << "This is parent process" << endl;
            cout << "Actual pid of parent: " << getpid() << endl;
            exit(1);
        }
    }
    else if (c == 3)
    {
        int pid;
        pid = fork();
        if (pid < 0)
        {
            cout << "\n Fork failed";
            exit(-1);
        }
        else if (pid == 0)
        {
            cout << "Child process\n";
            cout << getpid() << endl;
            exit(0);
        }
        else
        {
            cout << "Parent process\n";
            cout << getpid() << endl;
            wait(NULL);
            cout << "hello";
            exit(1);
        }
    }
    else
    {
        cout << "Invalid choice";
    }
    return 0;
}