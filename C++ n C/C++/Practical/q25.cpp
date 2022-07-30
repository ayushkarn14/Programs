#include<fstream>
#include<iostream>

using namespace std;
struct Student {
    string roll_no,name,cls,year,marks;

    Student(string roll_no, string name, string cls, string year, string marks){
        this->roll_no = roll_no;
        this->name = name;
        this->cls = cls;
        this->year = year;
        this->marks = marks;
    }
    void insert_data_into_file(int student_number){
        ofstream ofile;
        ofile.open("q25.txt",ios::app);
        ofile<<"details of student "<<student_number<<"\nRoll no:"<<roll_no<<"\nName:"<<name<<"\nClass:"<<cls<<"\nYear:"<<year<<"\nMarks:"<<marks<<"\n\n";
        ofile.close();
    }
};


int main(){
    ofstream ofile;
    string roll_no,name,cls,year,marks;
    ofile.open("student.txt", ios::trunc);
    ofile.close();
    for (int i=0; i<3; i++){
        cout<<"enter the details of student "<<i+1<<"\n\n";
        cout<<"enter roll no : ";
        cin>>roll_no;
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter class : ";
        cin>>cls;
        cout<<"enter year : ";
        cin>>year;
        cout<<"enter marks : ";
        cin>>marks;
        cout<<"\n\n";
        Student s = Student(roll_no,name,cls,year,marks);
        s.insert_data_into_file(i+1);
        
    }
    return 0;
}