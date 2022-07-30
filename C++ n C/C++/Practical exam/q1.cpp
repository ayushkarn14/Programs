#include <bits/stdc++.h>
using namespace std;

class StudentInfo
{
public:
    string name, address, branch, department;
    virtual void in()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter branch: ";
        cin >> branch;
        cout << "Enter department: ";
        cin >> department;
    }
    virtual void display()
    {
        cout << "Name of student: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Branch: " << branch << endl;
        cout << "Department: " << department << endl;
    }
};

class StudentETC : public StudentInfo
{
public:
    int marks, attendance;
    virtual void in()
    {
        StudentInfo::in();
        cout << "Enter marks of student: ";
        cin >> marks;
        cout << "Enter attendance of student: ";
        cin >> attendance;
    }
    virtual void display()
    {
        StudentInfo::display();
        cout << "Marks: " << marks << endl;
        cout << "Attendance: " << attendance;
        cout << endl;
    }
};
int main()
{
    StudentInfo *student[2];//object array of size 2 for 2 students
    StudentETC student1, student2;

    student[0] = &student1;
    student[1] = &student2;

    for (int i = 0; i < 2; i++)//loop to take input
    {
        cout << "Student " << i + 1 << " :" << endl;
        student[i]->in();
    }
    cout << endl;
    for (int i = 0; i < 2; i++)//loop to display info
    {
        cout << "Student " << i + 1 << " :" << endl;
        student[i]->display();
    }
    return 0;
}