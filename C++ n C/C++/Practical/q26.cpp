#include<iostream>
#include<fstream>
using namespace std;

struct Student {
    string roll_no,name,cls,year,marks;

    Student(string roll_no, string name, string marks){
        this->roll_no = roll_no;
        this->name = name;
        this->marks = marks;
    }
    void display(int student_number){
        cout<<"details of student "<<student_number<<endl;
        cout<<"Roll no : "<<roll_no<<"\nName : "<<name<<"\nMarks : "<<marks<<"\n\n";
    }
};
int main(){
    ifstream ifile;
    ifile.open("q25.txt");
    string roll_no = "",name = "",marks = "";
    int student = 1;
    while (!ifile.eof()){
        string line;
        getline(ifile,line);
        int index = line.find(":");
        if (index != -1){
            if (line.substr(0,index) == "Roll no")
                roll_no = line.substr(index+1);
            if (line.substr(0,index) == "Name")
                name = line.substr(index+1);
            if (line.substr(0,index) == "Marks")
                marks = line.substr(index+1);
        }
        if (marks != ""){
            Student s = Student(roll_no,name,marks);
            s.display(student);
            student++;
            roll_no = "";
            name = "";
            marks = "";
        }
    }
    ifile.close();
    return 0;
}