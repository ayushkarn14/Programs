#include <iostream>
#include "SNode.cpp"
using namespace std;
class SList
{
public:
    SNode *head;
    SNode *tail;
    SList()
    {
        head = NULL;
        tail = NULL;
    }
    bool is_empty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    void insert_at_head(int x)
    {
        SNode *p = new SNode(x);
        if (is_empty())
        {
            head = p;
            tail = p;
        }
        else
        {
            p->next = head;
            head = p;
        }
    }
    void insert_at_tail(int x)
    {
        SNode *p = new SNode(x);
        if (is_empty())
        {
            head = p;
            tail = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
    }
    void insert_at(int i, int x)
    {
        SNode *p = new SNode(x);
        SNode *temp = head;
        if (i == 0)
        {
            insert_at_head(x);
            return;
        }
        int c = 1;
        while (temp != NULL && c < i)
        {
            temp = temp->next;
            c++;
        }
        if (temp == NULL)
            throw "Invalid Index";
        else
        {
            if (temp->next == NULL)
                tail = p;
            p->next = temp->next;
            temp->next = p;
        }
    }

    void delete_front()
    {
        if (is_empty())
            throw "List is empty";
        SNode *temp = head;
        head = temp->next;
        delete temp;
    }
    void delete_back()
    {
        if (is_empty())
            throw "List is empty";
        SNode *prev = NULL;
        SNode *temp = head;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        tail = prev;
        delete temp;
    }
    void delete_at(int i)
    {
        if (is_empty())
            throw "List is empty";
        if (i == 0)
        {
            delete_front();
            return;
        }
        SNode *temp = head;
        int count = 0;
        while (count < i - 1 && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL)
            throw "Invalid Index";
        if (temp->next->next == NULL)
            tail = temp;
        SNode *to_delete = temp->next;
        temp->next = to_delete->next;
        delete to_delete;
    }
    void delete_x(int value)
    {
        if (is_empty())
            throw "List is empty";
        SNode *ptr = head;
        SNode *prev = NULL;
        while (ptr != NULL && ptr->d != value)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL)
            throw "Invalid value";
        if (ptr->next == NULL)
            tail = prev;
        if (prev == NULL)
            head = head->next;
        else
            prev->next = ptr->next;
        delete ptr;
    }
    SNode *search(int x)
    {
        if (is_empty())
            throw "List is empty";
        SNode *temp = head;
        while (temp != NULL)
        {
            if (temp->d == x)
            {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
    void display()
    {
        SNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->d << " ";
            temp = temp->next;
        }
    }
    void concat(SList ob)
    {
        this->tail->next = ob.head;
    }
};
// int main()
// {
//     try
//     {

//         SList list;
//         list.insert_at_head(1);
//         list.insert_at_head(2);
//         list.insert_at_tail(4);
//         list.insert_at_tail(4);
//         list.insert_at_tail(5);
//         list.display();
//         cout << endl;
//         list.delete_at(1);
//         list.display();
//         // SList list1;
//         // list1.insert_at_head(11);
//         // list1.insert_at_head(21);
//         // list1.insert_at_tail(41);
//         // list1.insert_at_tail(41);
//         // list1.insert_at_tail(51);

//         // list.concat(list1);
//         // list.insert_at(0, 3);
//         // list.delete_front();
//         // list.delete_back();
//         // list.display();
//         // cout << endl;
//         // list.delete_at(2);
//         // list.delete_x(4);
//         // list.display();
//         // cout << endl;
//         // if (list.search(3) != NULL)
//         //     cout << "found" << endl;
//         // else
//         //     cout << "not found " << endl;
//         // cout << list.tail->d << " ";
//     }
//     catch (char const *msg)
//     {
//         cout << msg << endl;
//     }
// }