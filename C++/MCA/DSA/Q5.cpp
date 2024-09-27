#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *next;
    Node *prev;
    Node(int x)
    {
        key = x;
        next = nullptr;
        prev = nullptr;
    }
};
Node *createList()
{
    int flag = true;
    Node *head = nullptr;
    Node *t = nullptr, *t2 = nullptr;

    while (flag)
    {
        cout << "Enter value: ";
        int n;
        cin >> n;
        t = new Node(n);
        if (!head)
            head = t;
        else
        {
            t2->next = t;
            t->prev = t2;
        }
        t2 = t;
        cout << "Do you want to enter more? (Y for yes, anything else for No)" << endl;
        char c;
        cin >> c;

        if (c != 'Y' && c != 'y')
        {
            flag = false;
        }
    }
    return head;
}

void traverse(Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else
    {

        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->key << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void insertAtHead(int x, Node *&head)
{
    Node *t = new Node(x);
    if (head == nullptr)
        head = t;
    else
    {
        t->next = head;
        head->prev = t;
        head = t;
    }
}
void insertAtTail(int x, Node *&head)
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
        t->prev = temp;
    }
}
void insertAfter(int x, int aft, Node *&head)
{
    Node *t = new Node(x);
    Node *temp = head;
    while (temp->key != aft && temp->next != nullptr)
        temp = temp->next;
    if (temp->key == aft)
    {
        t->next = temp->next;
        t->prev = temp;
        if (temp->next != nullptr)
            temp->next->prev = t;
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
        head->prev = nullptr;
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
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->prev->next = nullptr;
        delete temp;
    }
}
void deleteElement(int x, Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else
    {
        Node *temp = head;
        while (temp != nullptr && temp->key != x)
            temp = temp->next;

        if (temp == nullptr)
            cout << "Invalid value\n";
        else
        {
            if (temp->next != nullptr)
                temp->next->prev = temp->prev;
            if (temp->prev != nullptr)
                temp->prev->next = temp->next;

            if (temp->prev == nullptr)
                head = temp->next;
            delete temp;
        }
    }
}

int main()
{
    Node *head = createList();
    traverse(head);
    int outerSwitch;
    char innerSwitch;
    int ele, aft;
    do
    {
        cout << "Enter:";
        cout << "1:Insert\t";
        cout << "2:Delete\t";
        cout << "-1:Terminate\n";
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
                insertAtHead(ele, head);
                traverse(head);
                break;

            case 'b':
                cout << "Enter element to insert: ";
                cin >> ele;
                insertAtTail(ele, head);
                traverse(head);
                break;

            case 'c':
                cout << "Enter element to insert: ";
                cin >> ele;
                cout << "Enter element after which to insert: ";
                cin >> aft;
                insertAfter(ele, aft, head);
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
                cout << "Enter element to delete : ";
                cin >> ele;
                deleteElement(ele, head);
                traverse(head);
                break;
            default:
                cout << "Choose correct option\n";
                break;
            }
            break;
        default:
            cout << "Choose correct option\n";
        }
    } while (outerSwitch != -1);
}