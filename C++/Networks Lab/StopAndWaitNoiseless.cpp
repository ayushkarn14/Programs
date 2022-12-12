#include <iostream>
using namespace std;
class StopAndWait
{
public:
    void sender(int ack)
    {
        if (ack == 4)
            return;
        char arr[] = {'A', 'B', 'C', 'D', 'E'};
        cout << "Packet " << (int)arr[ack + 1] - 65 << " sent" << endl;
        reciever(arr[ack + 1]);
    }
    void reciever(char msg)
    {
        cout << "Packet " << (int)msg - 65 << " recieved" << endl;
        sender((int)msg - 65);
    }
};
int main()
{
    StopAndWait ob;
    ob.sender(-1);
}