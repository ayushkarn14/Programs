#include <iostream>
using namespace std;
#define MAX_SIZE 10
struct Queue
{
    int queue[MAX_SIZE];
    int front;
    int rear;

    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return queue[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    int s;
    do
    {
        cout << "Enter:" << endl;
        cout << "1:Enqueue" << endl;
        cout << "2:Dequeue" << endl;
        cout << "3:Peek" << endl;
        cout << "4:Display" << endl;
        cout << "-1:Terminate" << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            int n;
            cout << "Enter element to enqueue: ";
            cin >> n;
            q.enqueue(n);
            q.display();
            break;
        case 2:
            q.dequeue();
            q.display();
            break;
        case 3:
            cout << "Front element : " << q.peek() << endl;
            break;
        case 4:
            q.display();
            break;
        default:
            cout << "No queue operation selected";
        }
        cout << endl;
    } while (s != -1);

    return 0;
}
