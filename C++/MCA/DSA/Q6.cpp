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
        {
            head = t;
            head->next = head;
            head->prev = head; // Circular link for a single node
        }
        else
        {
            t2 = head->prev; // The last node
            t2->next = t;
            t->prev = t2;
            t->next = head;
            head->prev = t;
        }
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
        do
        {
            cout << temp->key << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
}

void insertAtHead(int x, Node *&head)
{
    Node *t = new Node(x);
    if (head == nullptr)
    {
        head = t;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *last = head->prev; // Get the last node
        t->next = head;
        t->prev = last;
        head->prev = t;
        last->next = t;
        head = t; // Update the head pointer
    }
}

void insertAtTail(int x, Node *&head)
{
    Node *t = new Node(x);
    if (head == nullptr)
    {
        head = t;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *last = head->prev;
        last->next = t;
        t->prev = last;
        t->next = head;
        head->prev = t;
    }
}

void insertAfter(int x, int aft, Node *&head)
{
    Node *t = new Node(x);
    Node *temp = head;
    do
    {
        if (temp->key == aft)
        {
            t->next = temp->next;
            t->prev = temp;
            temp->next->prev = t;
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
        cout << "List is empty\n";
    else if (head->next == head) // Only one node in the list
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *last = head->prev;
        Node *to_del = head;
        head = head->next;
        head->prev = last;
        last->next = head;
        delete to_del;
    }
}

void deleteTail(Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else if (head->next == head) // Only one node in the list
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node *last = head->prev;
        last->prev->next = head;
        head->prev = last->prev;
        delete last;
    }
}

void deleteElement(int x, Node *&head)
{
    if (head == nullptr)
        cout << "List is empty\n";
    else
    {
        Node *temp = head;
        do
        {
            if (temp->key == x)
            {
                if (temp->next == temp) // Only one element in the list
                {
                    delete temp;
                    head = nullptr;
                    return;
                }
                else
                {
                    temp->next->prev = temp->prev;
                    temp->prev->next = temp->next;
                    if (temp == head)
                        head = temp->next;
                    delete temp;
                    return;
                }
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Invalid value\n";
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
        cout << "Enter:\n";
        cout << "1:Insert\t2:Delete\t-1:Terminate\n";
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
