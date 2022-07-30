#include <bits/stdc++.h>
using namespace std;
class STUDENT
{
    int roll;
    char name[20];
    float marks;

public:
    void Accept();
    void Display();
};

void STUDENT::Accept()

{
    cout << "Enter roll number:";
    cin >> roll;
    cout << "Enter Name:";
    cin >> name;
    cout << "Enter Marks:";
    cin >> marks;
}

void STUDENT::Display()
{
    cout << "Roll number:" << roll<<endl;
    cout << "Name:" << name<<endl;
    cout << "Marks:" << marks<<endl;
}

int main(){
    STUDENT ob;
    ob.Accept();
    ob.Display();
    return 0;
}