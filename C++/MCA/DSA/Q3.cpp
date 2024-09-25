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
class Sll
{
public:
    Node *head;
    Sll()
    {
        head = nullptr;
    }
    void traverse()
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
    int count()
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
    void insertAtHead(int x)
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
    void insertAtTail(int x)
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
    void insertAfter(int x, int aft)
    {
        Node *t = new Node(x);
        Node *temp = head;
        while (temp->data != aft && temp->next != nullptr)
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
        else
        {
            Node *to_del = head;
            head = head->next;
            delete to_del;
        }
    }
    void deleteTail()
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
    void deleteElement(int x)
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
    void reverse()
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
};
int main()
{
    int outerSwitch;
    char innerSwitch;
    Sll list;
    int ele, aft;
    do
    {
        cout << "Enter:";
        cout << "1:Insert\t";
        cout << "2:Delete\t";
        cout << "3:Count Elements\t";
        cout << "4:Reverse\t";
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
        case 3:
            cout << "No. of elements : " << list.count() << endl;
            break;
        case 4:
            cout << "List has been reversed\n";
            list.reverse();
            list.traverse();
            break;
        default:
            cout << "Choose correct option\n";
        }
    } while (outerSwitch != -1);
}