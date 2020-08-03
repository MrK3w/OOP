#pragma once
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class StAcc
{
private:
	string _class;
	string email;
	int accnum;
	string teacher;
	double avg;
	Student* owner;
	Student* fellow;
	double grades[5];
public:
	StAcc(string c, string e, int n, string t, Student* o);
	StAcc(string c, string e, int n, string t, Student* o, Student* f);
	string GetClass();
	string GetMail();
	int GetNum();
	string GetTeacher();
	Student* GetOwner();
	Student* GetFellow();
	double CountAvg();
	bool CanPass();
	void SetGrades(double* p);

};

