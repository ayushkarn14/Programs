// #include <iostream>
// #include "AbhiNode.cpp"
// using namespace std;

// class LinkedList
// {
// public:
//     Node *head;
//     Node *tail;

//     LinkedList()
//     {
//         head = NULL;
//         tail = NULL;
//     }
//     LinkedList(int d)
//     {
//         Node *n = new Node(d);
//         head = n;
//         tail = n;
//     }
//     ~LinkedList()
//     {
//         Node *p = NULL;
//         while (head != NULL)
//         {
//             head = p;
//             p = p->next;
//             delete head;
//         }
//     }
//     void insertAtHead(int d);
//     void insertAtTail(int d);
//     void insertAtPosition(int pos, int d);
//     void remove(int value);
//     void removeAt(int pos);
//     void concat(LinkedList &l);
//     void input();
//     void display();
// };
// void LinkedList::insertAtHead(int d)
// {
//     Node *temp = new Node(d);
//     if (head == NULL)
//     {
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         temp->next = head;
//         head = temp;
//     }
// }
// void LinkedList::insertAtTail(int d)
// {
//     Node *temp = new Node(d);
//     if (head == NULL)
//     {
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         tail->next = temp;
//         tail = tail->next;
//     }
// }
// void LinkedList::insertAtPosition(int pos, int d)
// {
//     Node *n1 = new Node(d);
//     Node *temp = head;
//     int count = 1;
//     if (pos == 1)
//     {
//         n1->next = head;
//         head = n1;
//         return;
//     }

//     while (count < pos - 1 && temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp == NULL)
//         throw "INVALID INDEX";
//     else
//     {
//         if (temp->next == NULL)
//             tail = n1;
//         n1->next = temp->next;
//         temp->next = n1;
//     }
// }
// void LinkedList::removeAt(int pos)
// {
//     if (head == NULL)
//         throw "Empty List";
//     if (pos == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
//     else
//     {
//         Node *temp = head;
//         int count = 1;
//         while (count < pos - 1)
//         {
//             temp = temp->next;
//             count++;
//         }
//         if (temp->next->next == NULL)
//         {
//             tail = temp;
//         }
//         Node *curr = temp->next;
//         temp->next = curr->next;
//         delete curr;
//     }
// }
// void LinkedList::remove(int value)
// {
//     if (head == NULL)
//         throw "Empty List";
//     if (head->data == value)
//     {
//         removeAt(1);
//     }
//     else
//     {
//         Node *curr = head->next;
//         Node *prev = head;
//         while (prev->next != NULL)
//         {
//             if (curr->data == value)
//             {
//                 prev->next = curr->next;
//                 if (curr->next == NULL)
//                 {
//                     tail = prev;
//                 }
//                 delete curr;
//             }
//             else
//             {
//                 curr = curr->next;
//                 prev = prev->next;
//             }
//         }
//     }
// }
// void LinkedList::input()
// {
//     int s;
//     cout << "Size of the Linked List : ";
//     cin >> s;
//     for (int i = 1; i <= s; i++)
//     {
//         int v;
//         cout << "Enter an element : ";
//         cin >> v;
//         insertAtPosition(i, v);
//     }
// }
// void LinkedList::display()
// {
//     Node *temp = head;
//     cout << "Linked List = ";
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void LinkedList::concat(LinkedList &l)
// {
//     this->tail->next = l.head;
//     // Node *temp = this->head;
//     //  while (temp->next != NULL)
//     //  {
//     //      temp = temp->next;
//     //  }
//     //  temp->next = l.head;
//     this->tail = l.tail;
// }
// int main()
// {
//     try
//     {
//         LinkedList l1;
//         l1.insertAtHead(1);
//         // l1.insertAtHead(2);
//         // l1.insertAtTail(5);
//         // l1.insertAtPosition(2, 3);
//         l1.display();
//         // LinkedList l2;
//         // l2.insertAtHead(1);
//         // l2.insertAtHead(2);
//         // l2.insertAtTail(6);
//         // l2.insertAtPosition(2, 3);
//         // l1.concat(l2);
//         // l1.display();
//         // l1.removeAt(8);
//         // l1.remove(1);
//         // l1.display();
//         // l1.remove(1);
//         // l1.display();
//         // cout << l1.tail->data << endl;
//     }
//     catch (char const *e)
//     {
//         cout << "Exception: " << e << endl;
//     }

//     return 0;
// }