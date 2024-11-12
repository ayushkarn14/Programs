#include <iostream>
using namespace std;

// Circular queue using array
#define MAX_SIZE 5
struct CircularQueue
{
    int queue[MAX_SIZE];
    int front;
    int rear;
};

void initializeAr(CircularQueue *q)
{
    q->front = -1;
    q->rear = -1;
}

bool isFullAr(CircularQueue *q)
{
    return (q->front == (q->rear + 1) % MAX_SIZE);
}

bool isEmptyAr(CircularQueue *q)
{
    return q->front == -1;
}

void enqueueAr(CircularQueue *q, int value)
{
    if (isFullAr(q))
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (isEmptyAr(q))
    {
        q->front = q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }
    q->queue[q->rear] = value;
}

void dequeueAr(CircularQueue *q)
{
    if (isEmptyAr(q))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % MAX_SIZE;
    }
}
int peekAr(CircularQueue *q)
{
    if (isEmptyAr(q))
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return q->queue[q->front];
}
void displayAr(struct CircularQueue *q)
{
    if (isEmptyAr(q))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    int i = q->front;
    if (q->rear >= q->front)
    {
        for (int i = q->front; i <= q->rear; i++)
        {
            cout << q->queue[i] << " ";
        }
    }
    else
    {
        for (int i = q->front; i < MAX_SIZE; i++)
        {
            cout << q->queue[i] << " ";
        }
        for (int i = 0; i <= q->rear; i++)
        {
            cout << q->queue[i] << " ";
        }
    }
    cout << endl;
}

// Circular queue using linked list
struct Node
{
    int key;
    Node *next;
};

bool isEmptyLl(Node *rear)
{
    return rear == NULL;
}

void enqueueLl(Node *&rear, int n)
{
    Node *t = new Node;
    t->key = n;
    t->next = NULL;
    if (isEmptyLl(rear))
    {
        rear = t;
        rear->next = rear;
    }
    else
    {
        t->next = rear->next;
        rear->next = t;
        rear = t;
    }
}

void dequeueLl(Node *&rear)
{
    if (isEmptyLl(rear))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *front = rear->next;
    if (rear == front)
    {
        rear = NULL;
    }
    else
    {
        rear->next = front->next;
    }
    delete front;
}

int peekLl(Node *rear)
{
    if (isEmptyLl(rear))
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return rear->next->key;
}

void displayLl(Node *rear)
{
    if (isEmptyLl(rear))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *t = rear->next;
    cout << "Queue elements: ";
    do
    {
        cout << t->key << " ";
        t = t->next;
    } while (t != rear->next);
    cout << endl;
}

int main()
{
    cout << "1. Circular Queue using Array\n2. Circular queue using linked list" << endl;
    int ss;
    cin >> ss;
    int sw;
    switch (ss)
    {
    case 1:
        CircularQueue q;
        initializeAr(&q);
        do
        {
            cout << "Enter:" << endl;
            cout << "1:Enqueue" << endl;
            cout << "2:Dequeue" << endl;
            cout << "3:Peek" << endl;
            cout << "4:Display" << endl;
            cout << "-1:Terminate" << endl;
            cin >> sw;
            switch (sw)
            {
            case 1:
                int n;
                cout << "Enter element to enqueue: ";
                cin >> n;
                enqueueAr(&q, n);
                displayAr(&q);
                break;
            case 2:
                dequeueAr(&q);
                displayAr(&q);
                break;
            case 3:
                cout << "Front element : " << peekAr(&q) << endl;
                break;
            case 4:
                displayAr(&q);
                break;
            default:
                cout << "No queue operation selected";
            }
            cout << endl;
        } while (sw != -1);
        break;
    case 2:
        // if (sw == -1)
        //     exit(0);
        Node *rear = NULL;
        int s;
        do
        {
            cout << "Enter:" << endl;
            cout << "1: Enqueue" << endl;
            cout << "2: Dequeue" << endl;
            cout << "3: Peek" << endl;
            cout << "4: Display" << endl;
            cout << "-1: Terminate" << endl;
            cin >> s;
            switch (s)
            {
            case 1:
            {
                int n;
                cout << "Enter element to enqueue: ";
                cin >> n;
                enqueueLl(rear, n);
                displayLl(rear);
                break;
            }
            case 2:
                dequeueLl(rear);
                displayLl(rear);
                break;
            case 3:
                cout << "Front element: " << peekLl(rear) << endl;
                break;
            case 4:
                displayLl(rear);
                break;
            default:
                if (s != -1)
                    cout << "Invalid operation" << endl;
            }
            cout << endl;
        } while (s != -1);
    }
    return 0;
}
