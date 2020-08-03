#include "Student.h"


Student::Student(string n, string c)
{
	this->name = n;
	this->code = c;
}

string Student::GetName()
{
	return this->name;
}

string Student::GetCode()
{
	return this->code;
}
