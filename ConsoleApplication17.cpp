#include <iostream>
#include <map>
#include <string>
using namespace std;

class Student
{
	int str;
public:
	Student()
	{
		str = 0;
	}
	Student(int val)
	{
		str = val;
	}
	bool operator<(const Student& other) const
	{
		return str < other.str;
	}
};


int main()
{
	map<Student, string> obj;
	Student AverageScore[5] = { 7, 10, 7, 9, 5 };
	string StudentName[] = { "Arsen", "Dima", "Katya", "Maksim", "Daniil" };

	for (int i = 0; i < 5; i++) 
	{
		obj[AverageScore[i]] = StudentName[i]; 
	}

	int search = 5;
	auto i = obj.find(search);
	if (i != obj.end()) 
	{
		cout << "Student with average score " << search << " found: " << i->second;
	}
	else 
	{
		cout << "Student with average score " << search << " not found.";
	}
}