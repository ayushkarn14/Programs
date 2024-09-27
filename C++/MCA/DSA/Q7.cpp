#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *next;
    Node()
    {
        key = 0;
        next = nullptr;
    }
    Node(int x)
    {
        key = x;
        next = nullptr;
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
            t2->next = t;
        t2 = t;

        cout << "Do you want to enter more? (Y for yes, anything else for No)" << endl;
        char c;
        cin >> c;

        if (c != 'Y' && c != 'y')
        {
            flag = false;
        }
    }
    if (t2 != nullptr)
        t2->next = head;

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

Node *mergeSorted(Node *head1, Node *head2)
{
    if (head1 == nullptr)
        return head2;
    if (head2 == nullptr)
        return head1;

    Node *p1 = head1;
    Node *p2 = head2;
    Node *header = nullptr, *t1 = nullptr;

    while (p1->next != head1)
        p1 = p1->next;
    while (p2->next != head2)
        p2 = p2->next;
    p1->next = nullptr;
    p2->next = nullptr;

    // Start merging the lists
    p1 = head1;
    p2 = head2;

    if (p1->key < p2->key)
    {
        header = p1;
        p1 = p1->next;
    }
    else
    {
        header = p2;
        p2 = p2->next;
    }
    t1 = header;

    while (p1 != nullptr && p2 != nullptr)
    {
        if (p1->key < p2->key)
        {
            t1->next = p1;
            p1 = p1->next;
        }
        else
        {
            t1->next = p2;
            p2 = p2->next;
        }
        t1 = t1->next;
    }

    if (p1 != nullptr)
        t1->next = p1;
    else
        t1->next = p2;
    while (t1->next != nullptr)
        t1 = t1->next;
    t1->next = header;

    return header;
}

int main()
{
    cout << "Creation of 1st List" << endl;
    Node *head1 = createList();
    cout << "Creation of 2nd List" << endl;
    Node *head2 = createList();

    Node *head3 = mergeSorted(head1, head2);
    traverse(head3);

    return 0;
}
