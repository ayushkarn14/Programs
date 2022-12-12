#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int stipend;
    string course;
    bool intern_status;

    Student(string name, string course)
    {
        cout << "Overloaded constructor called " << endl;
        this->name = name;
        stipend = 0;
        this->course = course;
        intern_status = 0;
    }

    Student(string name, int stipend, string course, bool intern_status)
    {
        cout << "Parameterized constructor called " << endl;
        this->name = name;
        this->stipend = stipend;
        this->course = course;
        this->intern_status = intern_status;
    };

    Student(Student &obj)
    {
        cout << "Copy constructor called " << endl;
        name = obj.name;
        stipend = obj.stipend;
        course = obj.course;
        intern_status = obj.intern_status;
    }

    ~Student()
    {
        cout << " Destructor called " << endl;
    }
    friend ostream &operator<<(ostream &, Student &);
};

ostream &operator<<(ostream &os, Student &obj)
{
    os << "Student name : " << obj.name << ", stipend : " << obj.stipend << ", course : " << obj.course << ", intern_status : " << obj.intern_status << endl;
    return os;
}

int main()
{
    Student Student1("Ayush Karn", 11000, "Bsc (hons) Computer Science", 1);

    cout << Student1 << endl;

    cout << endl;

    Student Student2("Shivansh", "Bsc (hons) Computer Science");

    cout << Student2 << endl;

    cout << endl;

    cout << "Copying the details of student 1 in student 3";
    Student Student3(Student1);

    cout << Student3 << endl;

    cout << endl;

    return 0;
}