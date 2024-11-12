#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *next;
};
bool isEmpty(Node *head)
{
    return head == NULL;
}
// stack
void push(Node *&head, int n)
{
    Node *t = (Node *)malloc(sizeof(Node));
    t->key = n;
    t->next = NULL;
    if (!isEmpty(head))
    {
        t->next = head;
    }
    head = t;
}
void pop(Node *&head)
{
    if (isEmpty(head))
    {
        cout << "Stack underflow" << endl;
        return;
    }
    Node *to_pop = head;
    head = head->next;
    delete to_pop;
}
int tos(Node *head)
{
    if (isEmpty(head))
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    return head->key;
}
void displaySt(Node *head)
{
    if (isEmpty(head))
    {
        cout << "Stack is empty" << endl;
        return;
    }
    Node *t = head;
    cout << "Stack elements:" << endl;
    while (t != NULL)
    {
        cout << t->key << " ";
        t = t->next;
    }
    cout << endl;
}

// queue
void enqueue(Node *&head, int x)
{
    Node *t = (Node *)malloc(sizeof(Node));
    t->key = x;
    t->next = NULL;
    if (isEmpty(head))
        head = t;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = t;
    }
}
void dequeue(Node *&head)
{
    if (isEmpty(head))
        cout << "Queue is empty\n";
    else
    {
        Node *to_del = head;
        head = head->next;
        delete to_del;
    }
}

int peek(Node *head)
{
    if (isEmpty(head))
    {
        cout << "Queue is empty";
        return -1;
    }
    return head->key;
}
void displayQ(Node *head)
{
    if (isEmpty(head))
        cout << "queue is empty\n";
    else
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->key << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    cout << "1.Stack using linked list\n2.Queue using linked list" << endl;
    int ss;
    cin >> ss;
    int s;
    Node *headSt = NULL;
    Node *headQ = NULL;
    switch (ss)
    {
    case 1:
        // stack
        do
        {
            cout << "Enter:" << endl;
            cout << "1:Push" << endl;
            cout << "2:Pop" << endl;
            cout << "3:TOS" << endl;
            cout << "4:Display" << endl;
            cout << "-1:Terminate" << endl;
            cin >> s;
            switch (s)
            {
            case 1:
                int n;
                cout << "Enter element to push: ";
                cin >> n;
                push(headSt, n);
                displaySt(headSt);
                break;
            case 2:
                pop(headSt);
                displaySt(headSt);
                break;
            case 3:
                cout << "Top element : " << tos(headSt) << endl;
                break;
            case 4:
                displaySt(headSt);
                break;
            default:
                cout << "No stack operation selected";
            }
            cout << endl;
        } while (s != -1);
        break;
    case 2:
        // if (s == -1)
        //     exit(0);
        // queue
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
                enqueue(headQ, n);
                displayQ(headQ);
                break;
            case 2:
                dequeue(headQ);
                displayQ(headQ);
                break;
            case 3:
                cout << "Front element : " << peek(headQ) << endl;
                break;
            case 4:
                displayQ(headQ);
                break;
            default:
                cout << "No queue operation selected";
            }
            cout << endl;
        } while (s != -1);
    }
    return 0;
}
