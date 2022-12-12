// incomplete
#include <iostream>
#include <unistd.h>
using namespace std;
class StopAndWaitNoisy
{
public:
    int lastSent = -1;
    void sender(int ack)
    {
        if (ack == 4)
            return;
        char arr[] = {'A', 'B', 'C', 'D', 'E'};
        for (int i = 0; i < 5; i++)
        {

            unsigned int microsecond = 1000000;
            usleep(1 * microsecond);
        }
        if (ack != lastSent)
        {
            cout << "Packet " << (int)arr[ack + 1] - 65 << " sent" << endl;
            reciever(arr[lastSent]);
        }
        else
        {
            cout << "Packet " << (int)arr[ack + 1] - 65 << " sent" << endl;
            lastSent = (int)arr[ack + 1] - 65;
            reciever(arr[ack + 1]);
        }
    }
    void reciever(char msg)
    {
        cout << "Packet " << (int)msg - 65 << " recieved" << endl;
        sender((int)msg - 65);
    }
};
int main()
{
    // StopAndWaitNoisy ob;
    // ob.sender(-1);
    cout << "1000000000 \t 4\n";
    cout << "4 \t \t 100000\n";
}