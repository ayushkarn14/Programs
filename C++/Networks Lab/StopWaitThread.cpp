#include <iostream>
#include <thread>

using namespace std;
class StopWait
{
private:
    char msg;
    int ack;
    int last_ack;
    StopWait(char msg = 'Z')
    {
        ack = 0;
        last_ack = -1;
        this->msg = msg;
    }
    int sender()
    {
        while (true)
        {
            char data[] = {'A',
                           'B',
                           'C',
                           'D',
                           'E'};
            if (ack == last_ack + 1)
            {
                msg = data[ack];
                last_ack = ack;
            }
            else if (ack == last_ack)
                ;
            else if (ack != last_ack + 1)
            {
                ack = last_ack;
                msg = data[ack];
                last_ack = ack;
            }
            else
            {
                cout << "Hello";
            }
        }
    }
    int reciever()
    {
    }
};

int main()
{
}