#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

void traverse(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

void insertAtHead(Node *&head, int x)
{
    Node *t = new Node(x);
    if (head == nullptr)
    {
        head = t;
        head->next = head;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        t->next = head;
        temp->next = t;
        head = t;
    }
}

void insertAtTail(Node *&head, int x)
{
    Node *t = new Node(x);
    if (head == nullptr)
    {
        head = t;
        head->next = head;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = t;
        t->next = head;
    }
}

void insertAfter(Node *&head, int x, int aft)
{
    if (head == nullptr)
    {
        cout << aft << " not present in the list\n";
        return;
    }

    Node *t = new Node(x);
    Node *temp = head;
    do
    {
        if (temp->data == aft)
        {
            t->next = temp->next;
            temp->next = t;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << aft << " not present in the list\n";
}

void deleteHead(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
    }
    else if (head->next == head)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        Node *to_del = head;
        temp->next = head->next;
        head = head->next;
        delete to_del;
    }
}

void deleteTail(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
    }
    else if (head->next == head)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *tp = nullptr;
        Node *temp = head;
        while (temp->next != head)
        {
            tp = temp;
            temp = temp->next;
        }
        tp->next = head;
        delete temp;
    }
}

void deleteElement(Node *&head, int x)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    if (head->data == x)
    {
        deleteHead(head);
        return;
    }

    Node *prev = head;
    Node *temp = head->next;

    while (temp != head)
    {
        if (temp->data == x)
        {
            prev->next = temp->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout << x << " not present in the list\n";
}

int main()
{
    int outerSwitch;
    char innerSwitch;
    Node *head = nullptr;
    int ele, aft;

    do
    {
        cout << "Enter:\n";
        cout << "1: Insert\t";
        cout << "2: Delete\t";
        cout << "-1: Terminate\n";
        cin >> outerSwitch;

        switch (outerSwitch)
        {
        case 1:
            cout << "a. At Head\nb. At Tail\nc. After a value\n";
            cin >> innerSwitch;
            switch (innerSwitch)
            {
            case 'a':
                cout << "Enter element to insert: ";
                cin >> ele;
                insertAtHead(head, ele);
                traverse(head);
                break;
            case 'b':
                cout << "Enter element to insert: ";
                cin >> ele;
                insertAtTail(head, ele);
                traverse(head);
                break;
            case 'c':
                cout << "Enter element to insert: ";
                cin >> ele;
                cout << "Enter element after which to insert: ";
                cin >> aft;
                insertAfter(head, ele, aft);
                traverse(head);
                break;
            default:
                cout << "Choose correct option\n";
                break;
            }
            break;
        case 2:
            cout << "a. From Head\nb. From Tail\nc. Specific element\n";
            cin >> innerSwitch;
            switch (innerSwitch)
            {
            case 'a':
                deleteHead(head);
                traverse(head);
                break;
            case 'b':
                deleteTail(head);
                traverse(head);
                break;
            case 'c':
                cout << "Enter element to delete: ";
                cin >> ele;
                deleteElement(head, ele);
                traverse(head);
                break;
            default:
                cout << "Choose correct option\n";
                break;
            }
            break;
        case -1:
            cout << "Terminating program.\n";
            break;
        default:
            cout << "Choose correct option\n";
            break;
        }
    } while (outerSwitch != -1);

    return 0;
}
