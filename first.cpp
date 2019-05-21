this is my first file.
#include <iostream>
#include "String"
#include <conio.h>
using namespace std;
class Student
{
private:
	char *name;
	char *faculty;
	int grade, Group;


public:
	Student() {
		name = new char[20]; //Հիշողություն եմ զբաղեցնում
		strcpy(name, "Heghine");
		faculty = new char[20];
		strcpy(faculty, "IKM");
		grade = 1;
		Group = 807;
	}

	Student(char *n, char *f, int g, int G) //Կոնստրուկտոր
	{
		name = new char[strlen(n + 1)];
		faculty = new char[strlen(f + 1)];
		strcpy(name, n);
		strcpy(faculty, f);
		grade = g;
		Group = G;
	}

	~Student()    //Դեստրուկտոր
	{
		delete[] name; //Հիշողություն եմ ազատում
		delete[] faculty;
	}

	void info() {
		cout << "Name  " << name << endl;
		cout << "Faculty  " << faculty << endl;
		cout << "Grade  " << grade << endl;
		cout << "Group " << Group << endl << endl;
	}
};

class Student_A : public Student
{
private:
	char *task;
public:
	Student_A() : Student() //Կոնստ պո ումոլչյանիյու
	{
		task = new char[22];
		strcpy(task, "Student class");
	};

	Student_A(char *n, char *f, int g, int G, char *t) : Student(n, f, g, G) {  //Պարամետրերով կոնստրուկտոր
		task = new char[strlen(t + 1)];
		strcpy(task, t);
	}

	~Student_A()
	{
		delete[] task;
	}

	void info()
	{
		cout << "Task  " << task << endl << endl;
		Student::info();
	}
		
};

void main()// int main(int argc, char *argv[]) ///Չեմ հասկանում խի ա ստեղ ու ինչ ա 
{
	
	string n, f, t;
	int g, G;

	cout << "Name ---- " << endl;
	cin >> n;
	cout << "Faculty ---- " << endl;
	cin >> f;
	cout << "Grade ---- " << endl;
	cin >> g;
	cout << "Group ---- " << endl;
	cin >> G;
	cout << "Task ---- " << endl;
	cin >> t;

	Student_A aObj;
	Student_A bObj(n.begin(), f.begin(), g, G, t.begin());

	aObj.info();
	bObj.info();

	system("pause");
}
