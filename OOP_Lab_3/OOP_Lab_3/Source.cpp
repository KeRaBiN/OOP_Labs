#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class Student
{
public:
	Student();
	~Student();

	void setName(string name);
	void setSurname(string surname);
	void setMathGrade(int grade);
	void setPhysicsGrade(int grade);
	void setInformaticsGrade(int grade);

	string getName();
	string getSurname();
	int getMathGrade();
	int getPhysicsGrade();
	int getInformaticsGrade();

private:

	string Name;
	string Surname;
	int Math, Physics, Informatics;

};

Student::Student()
{
	Math = 0;
	Physics = 0;
	Informatics = 0;
}

Student::~Student()
{
}

void Student::setName(string name)
{
	Name = name;
}

void Student::setSurname(string surname)
{
	Surname = surname;
}

void Student::setMathGrade(int grade)
{
	Math = grade;
}

void Student::setPhysicsGrade(int grade)
{
	Physics = grade;
}

void Student::setInformaticsGrade(int grade)
{
	Informatics = grade;
}

string Student::getName()
{
	return Name;
}

string Student::getSurname()
{
	return Surname;
}

int Student::getMathGrade()
{
	return Math;
}

int Student::getPhysicsGrade()
{
	return Physics;
}

int Student::getInformaticsGrade()
{
	return Informatics;
}

void main()
{
	ifstream fin;
	fin.open("data.txt");
	if (!fin)
	{
		cout << "File not found" << endl;
		exit(1);
	}

	vector<Student> All_Students;
	string n;
	for (int i = 0;; i++)
	{
		fin >> n;
		if (fin.eof())
			break;
		
		All_Students.emplace_back();
		All_Students[i].setSurname(n);

		fin >> n;
		All_Students[i].setName(n);

		fin >> n;
		All_Students[i].setMathGrade(stof(n));

		fin >> n;
		All_Students[i].setPhysicsGrade(stof(n));

		fin >> n;
		All_Students[i].setInformaticsGrade(stof(n));
	}

	for (int i = 0; i < (All_Students.size() - 1); i++)
	{
		if (strcmp(All_Students[i].getName().c_str(), All_Students[(i + 1)].getName().c_str()) == 1)
		{
			swap(All_Students[i], All_Students[(i + 1)]);
			i = -1;
		}
	}

	char com;
	do
	{
		cout << endl;
		cout << "Select a subject to find worst students:" << endl;
		cout << "1 - Math" << endl;
		cout << "2 - Physics" << endl;
		cout << "3 - Informatics" << endl;
		cout << "0 - Close the program" << endl;
		cout << "Command: ";
		cin >> com;
		cout << endl;

		int grade_iterator = 1;
		bool is_found_worst_students = false;

		switch (com)
		{
		case '1':
			for (int i = 0; i < All_Students.size(); i++)
			{
				if (All_Students[i].getMathGrade() == grade_iterator)
				{
					is_found_worst_students = true;
					cout << All_Students[i].getName() << '\t' << All_Students[i].getSurname() << "\tMath grade: " << All_Students[i].getMathGrade() << endl;
				}

				if (!is_found_worst_students && (i + 1) == All_Students.size())
				{
					i = 0;
					grade_iterator++;
				}
			}
			break;
		case '2':
			for (int i = 0; i < All_Students.size(); i++)
			{
				if (All_Students[i].getPhysicsGrade() == grade_iterator)
				{
					is_found_worst_students = true;
					cout << All_Students[i].getName() << '\t' << All_Students[i].getSurname() << "\tPhysics grade: " << All_Students[i].getPhysicsGrade() << endl;
				}

				if (!is_found_worst_students && (i + 1) == All_Students.size())
				{
					i = 0;
					grade_iterator++;
				}
			}
			break;
		case '3':
			for (int i = 0; i < All_Students.size(); i++)
			{
				if (All_Students[i].getInformaticsGrade() == grade_iterator)
				{
					is_found_worst_students = true;
					cout << All_Students[i].getName() << '\t' << All_Students[i].getSurname() << "\tInformatics grade: " << All_Students[i].getInformaticsGrade() << endl;
				}

				if (!is_found_worst_students && (i + 1) == All_Students.size())
				{
					i = 0;
					grade_iterator++;
				}
			}
			break;
		case '0':
			break;
		default:
			cout << "There is no such command(" << endl;
			break;
		}
	} while (com != '0');

	fin.close();
}