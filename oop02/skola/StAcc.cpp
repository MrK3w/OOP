#include "Student.h"
#include "School.h"
#include "StAcc.h"

StAcc::StAcc(string c, string e, int n, string t, Student* o)
{
	this->_class = c;
	this->email = e;
	this->accnum = n;
	this->teacher = t;
	this->owner = o;
	this->fellow = nullptr;
	this->avg = 0;
	for (int i = 0; i < 5; i++)
	{
		this->grades[i] = 0;
	}
}

StAcc::StAcc(string c, string e, int n, string t, Student* o, Student* f)
{
	this->_class = c;
	this->email = e;
	this->accnum = n;
	this->teacher = t;
	this->owner = o;
	this->fellow = f;
	this->avg = 0;
	for (int i = 0; i < 5; i++)
	{
		this->grades[i] = 0;
	}
}

string StAcc::GetClass()
{
	return this->_class;
}

string StAcc::GetMail()
{
	return this->email;
}

int StAcc::GetNum()
{
	return this->accnum;
}

string StAcc::GetTeacher()
{
	return this->teacher;
}

Student* StAcc::GetOwner()
{
	return this->owner;
}

Student* StAcc::GetFellow()
{
	return this->fellow;
}

double StAcc::CountAvg()
{
	double avg = 0;
	for (int i = 0; i < 5; i++)
	{
		avg += this->grades[i];
	}
	return avg /= 5;
}

bool StAcc::CanPass()
{
	for (int i = 0; i < 5; i++)
	{
		if (this->grades[i] == 5)
			return false;
	}
	return true;
}

void StAcc::SetGrades(double* p)
{
	for (int i = 0; i < 5; i++)
	{
		this->grades[i] = p[i];
	}
}
