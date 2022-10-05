#include <iostream>
#include "DNode.cpp"
using namespace std;
class DList
{
public:
    DNode *header;
    DNode *trailer;
    DList()
    {
        header = new DNode();
        trailer = new DNode();
        header->next = trailer;
        trailer->prev = header;
    }
    void insert_at_head(int x)
    {
        DNode *p = new DNode(x);
        p->next = header->next;
        p->prev = header;
        header->next->prev = p;
        header->next = p;
    }
    void insert_at_tail(int x)
    {
        DNode *p = new DNode(x);
        p->next = trailer;
        p->prev = trailer->prev;
        trailer->prev->next = p;
        trailer->prev = p;
    }
    float average()
    {
        DNode *temp = header->next;
        float sum = 0;
        int c = 0;
        while (temp->next != NULL)
        {
            sum += temp->d;
            temp = temp->next;
            c++;
        }
        return sum / c;
    }
    bool isempty()
    {
        if (header->next == trailer)
            return true;
        return false;
    }
    long get_tail()
    {
        if (isempty())
            throw "Empty List";
        return (long)(trailer->prev->d);
    }
    void display()
    {
        // cout << "displaying:\n";
        DNode *temp = header->next;
        while (temp->next != NULL)
        {
            cout << temp->d << " ";
            temp = temp->next;
        }
    }
    void delete_back()
    {
        if (isempty())
            throw "List is empty";
        DNode *to_delete = trailer->prev;
        trailer->prev->prev->next = trailer;
        trailer->prev = trailer->prev->prev;
        delete to_delete;
    }
    void concat(DList ob)
    {
        DNode *temp = this->trailer;
        temp->prev->next = ob.header->next;
        ob.header->next->prev = temp->prev;
        this->trailer = ob.trailer;
        delete temp;
    }
};
// int main()
// {
//     DList l1;
//     l1.insert_at_tail(200);
//     l1.insert_at_tail(100);
//     l1.insert_at_tail(300);
//     l1.delete_back();
//     l1.display();
// }