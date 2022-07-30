#include<iostream>
using namespace std;

class StudentInfo{
    public:
        string name,adress,branch,department;
        virtual void set(){
            cout<<"\n\nenter information \n";
            cout<<"enter name of student : ";
            cin>>name;
            cout<<"enter address : ";
            cin>>adress;
            cout<<"enter branch : ";
            cin>>branch;
            cout<<"enter department : ";
            cin>>department;
        }
        virtual void display(){
            cout<<"\n\ndisplaying information";
            cout<<"name : "<<name<<endl;
            cout<<"adress : "<<adress<<endl;
            cout<<"branch : "<<branch<<endl;
            cout<<"department : "<<department<<endl;
        }
};

class StudentETC : public StudentInfo{
    int marks, attendence;
    void set(){
        cout<<"\n\nenter information \n";
        cout<<"enter name of student : ";
        cin>>name;
        cout<<"enter address : ";
        cin>>adress;
        cout<<"enter branch : ";
        cin>>branch;
        cout<<"enter department : ";
        cin>>department;
        cout<<"enter marks : ";
        cin>>marks;
        cout<<"enter attendence : ";
        cin>>attendence;
    }
    void display(){
        cout<<"\n\ndisplaying information";
        cout<<"name : "<<name<<endl;
        cout<<"adress : "<<adress<<endl;
        cout<<"branch : "<<branch<<endl;
        cout<<"department : "<<department<<endl;
        cout<<"marks : "<<marks<<endl;
        cout<<"attendence : "<<attendence<<endl;
    }
};

int main(){
    StudentInfo *info[2];
    StudentETC student1,student2;

    info[0] = &student1;
    info[1] = &student2;

    for (int i=0;i<2;i++){
        info[i]->set();
        info[i]->display();
    }
    return 0;
}