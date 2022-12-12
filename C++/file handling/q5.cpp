#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    string address;
    Person(string nm, int ag, string add){
        name = nm;
        age = ag;
        address = add;
    }
    public: void disp(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }
    
    virtual void print(){}
};

class Teacher : public Person{
    public:
    string course;
    int salary;
    string qualification;
    Teacher(string name, int age, string address, string course, int salary, string qualification)
    : Person(name,age,address)
    {
        this->course = course;
        this->salary = salary;
        this->qualification =qualification;
    }
    
     void print(){
         cout<<"course: "<<course<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"qualification: "<<qualification<<endl;
    }
};

class Visiting_faculty : public Teacher{
    public:
    string specialization;
    int teaching_hour;
    string institute;
    Visiting_faculty(string speci, int t_hour, string intst, string name, int age, string address, string course, int salary, string qualification)
    : Teacher( name,  age,  address,  course,  salary,  qualification)
    {
        this->specialization = speci;
        this->teaching_hour = t_hour;
        this->institute = intst;
    }
    
     public: void print(){
        cout<<"specialization: "<<specialization<<endl;
        cout<<"teaching_hour: "<<teaching_hour<<endl;
        cout<<"institute: "<<institute<<endl;
    }
};


int main()
{
    cout<<"Hello World"<<endl;
    Person *p1, *p2;
    cout<<"------------"<<endl;
    
    
    Teacher t1 = Teacher("Ayush Karn",18,"India","CP", 690000, "MSc");
    // t1.print();
    p1 = &t1;
    p1->print();
    cout<<"-------------"<<endl;
    

    Visiting_faculty vf = Visiting_faculty("Computer Science",12,"IIT","Rishu",37,"Tata","Webdev", 891000, "M.Tech");
    // vf.print();
    p2 = &vf;
    p2->print();
    return 0;
}