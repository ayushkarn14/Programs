#include <bits/stdc++.h>
using namespace std;

class Person  
{
private:
	string name;
	int age;
public:
	Person(){}
	virtual void get(){
		cout<<"Enter the person name: ";
		getline(cin,name);
		cout<<"Enter the person age: ";
		cin>>age;
	}
	virtual void display(){
		cout<<"The person name: "<<name<<"\n";
		cout<<"The person age: "<<age<<"\n";
	}
};

class Teacher:public Person{
private:
	float salary;
public:
	Teacher(){}
	virtual void get(){
		Person::get();
		cout<<"Enter the teacher salary: ";
		cin>>salary;
	}
	virtual void display(){
		Person::display();
		cout<<"The teacher salary: "<<salary<<"\n";
	}
};


class Student:public Person{
private:
	string grade;
public:
	Student (){}
	virtual void get(){
		Person::get();
		cout<<"Enter the student grade: ";
		cin>>grade;
	}
	virtual void display(){
		Person::display();
		cout<<"The student grade:: "<<grade<<"\n";
	}
};

int main(){
	Person* persons[2];
	Teacher* teacher=new Teacher();
	teacher->get();
	cout<<"\n";
	fflush(stdin);
	Student* student=new Student();
	student->get();
	persons[0]= teacher;
	persons[1]= student;
	cout<<"\n";
	for(int i=0;i<2;i++){
		persons[i]->display();	
		cout<<"\n";
		delete persons[i];
	}
	system("pause");
	return 0;
}