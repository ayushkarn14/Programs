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
class Cll
{
public:
    Node *head;
    Cll()
    {
        head = nullptr;
    }
    void traverse()
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
    // int count()
    // {
    //     if (head == nullptr)
    //         return 0;
    //     else
    //     {
    //         int c = 0;
    //         Node *temp = head;
    //         do
    //         {
    //             c++;
    //             temp = temp->next;
    //         } while (temp->next != head);
    //         return c;
    //     }
    // }
    void insertAtHead(int x)
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
    void insertAtTail(int x)
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
    void insertAfter(int x, int aft)
    {
        Node *t = new Node(x);
        Node *temp = head;
        while (temp->data != aft && temp->next != head)
            temp = temp->next;
        if (temp->data == aft)
        {
            t->next = temp->next;
            temp->next = t;
        }
        else
        {
            cout << aft << " not present in the list\n";
        }
    }
    void deleteHead()
    {
        if (head == nullptr)
            cout << "List is empty\n";
        else if (head->next == head)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            Node *to_del = head;
            temp->next = head->next;
            head = head->next;
            delete to_del;
        }
    }
    void deleteTail()
    {
        if (head == nullptr)
            cout << "List is empty\n";
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
    void deleteElement(int x)
    {
        if (head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        if (head->data == x)
        {
            if (head->next == head)
            {
                delete head;
                head = nullptr;
            }
            else
            {
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                Node *to_del = head;
                temp->next = head->next;
                head = head->next;
                delete to_del;
            }
            return;
        }

        prev = head;
        temp = head->next;

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
};
int main()
{
    int outerSwitch;
    char innerSwitch;
    Cll list;
    int ele, aft;
    do
    {
        cout << "Enter:";
        cout << "1:Insert\t";
        cout << "2:Delete\t";
        // cout << "3:Count Elements\t";
        // cout << "3:Reverse\t";
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
                list.insertAtHead(ele);
                list.traverse();
                break;

            case 'b':
                cout << "Enter element to insert: ";
                cin >> ele;
                list.insertAtTail(ele);
                list.traverse();
                break;

            case 'c':
                cout << "Enter element to insert: ";
                cin >> ele;
                cout << "Enter element after which to insert: ";
                cin >> aft;
                list.insertAfter(ele, aft);
                list.traverse();
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
                list.deleteHead();
                list.traverse();
                break;

            case 'b':
                list.deleteTail();
                list.traverse();
                break;
            case 'c':
                cout << "Enter element to delete : ";
                cin >> ele;
                list.deleteElement(ele);
                list.traverse();
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
    // Cll list;
    // list.insertAtHead(1);
    // list.insertAtHead(2);
    // list.insertAtHead(3);
    // list.insertAtTail(5);
    // list.insertAfter(7, 2);
    // list.deleteElement(5);
    // list.deleteElement(2);
    // list.traverse();
}