#include <iostream>
using namespace std;

struct Node
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
        cout << "List is empty\n";
    else
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int count(Node *head)
{
    if (head == nullptr)
        return 0;
    else
    {
        int c = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }
}

void insertAtHead(Node *&head, int x)
{
    Node *t = new Node(x);
    if (head == nullptr)
        head = t;
    else
    {
        t->next = head;
        head = t;
    }
}

void insertAtTail(Node *&head, int x)
{
    Node *t = new Node(x);
    if (head == nullptr)
        head = t;
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = t;
    }
}

void insertAfter(Node *&head, int x, int aft)
{
    Node *t = new Node(x);
    Node *temp = head;
    while (temp != nullptr && temp->data != aft)
        temp = temp->next;
    if (temp != nullptr && temp->data == aft)
    {
        t->next = temp->next;
        temp->next = t;
    }
    else
    {
        cout << aft << " not present in the list\n";
    }
}

void deleteHead(Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else
    {
        Node *to_del = head;
        head = head->next;
        delete to_del;
    }
}

void deleteTail(Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *tp = nullptr;
        Node *temp = head;
        while (temp->next != nullptr)
        {
            tp = temp;
            temp = temp->next;
        }
        tp->next = nullptr;
        delete temp;
    }
}

void deleteElement(Node *&head, int x)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else
    {
        Node *tp = nullptr;
        Node *temp = head;
        while (temp != nullptr && temp->data != x)
        {
            tp = temp;
            temp = temp->next;
        }
        if (temp == nullptr)
            cout << "Invalid value\n";
        else
        {
            if (tp == nullptr)
                head = head->next;
            else
                tp->next = temp->next;
            delete temp;
        }
    }
}

void reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = nullptr;
    Node *save;
    while (curr != nullptr)
    {
        save = curr->next;
        curr->next = prev;
        prev = curr;
        curr = save;
    }
    head = prev;
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
        cout << "3: Count Elements\t";
        cout << "4: Reverse\t";
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
        case 3:
            cout << "No. of elements: " << count(head) << endl;
            break;
        case 4:
            cout << "List has been reversed\n";
            reverse(head);
            traverse(head);
            break;
        case -1:
            cout << "Terminating program.\n";
            break;
        default:
            cout << "Choose correct option\n";
            break;
        }
    } while (outerSwitch != -1);
}
