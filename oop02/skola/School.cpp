#include "Student.h"
#include "School.h"
#include "StAcc.h"

School::School(int a)
{
	this->students = new Student*[a];
	this->studentscount = 0;
	this->staccs = new StAcc*[a];
	this->staccscount = 0;
}

School::~School()
{
	for (int i = 0; i < this->studentscount; i++)
	{
		delete this->students[i];
	}

	for (int i = 0; i < this->staccscount; i++)
	{
		delete this->staccs[i];
	}

	delete[] this->students;
	delete[] this->staccs;
}

Student* School::GetStudent(string c)
{
	for (int i = 0; i < this->studentscount; i++)
	{
		if (this->students[i]->GetCode() == c)
			return this->students[i];
	}
	return nullptr;
}

StAcc* School::GetAcc(int n)
{
	for (int i = 0; i < this->staccscount; i++)
	{
		if (this->staccs[i]->GetNum() == n)
			return this->staccs[i];
	}
	return nullptr;
}

Student* School::CreateStudent(string n, string c)
{
	Student* newObj = new Student(n, c);
	this->students[this->studentscount] = newObj;
	this->studentscount++;

	return newObj;
}

StAcc* School::CreateAccount(string c, string e, int n, string t, Student* o)
{
	StAcc* newObj = new StAcc(c, e, n, t, o);
	this->staccs[this->staccscount] = newObj;
	this->staccscount++;

	return newObj;
}

StAcc* School::CreateAccount(string c, string e, int n, string t, Student* o, Student* f)
{
	StAcc* newObj = new StAcc(c, e, n, t, o, f);
	this->staccs[this->staccscount] = newObj;
	this->staccscount++;

	return newObj;
}
