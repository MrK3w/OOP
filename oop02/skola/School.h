#pragma once
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class School
{
private:
	Student** students;
	int studentscount;

	StAcc** staccs;
	int staccscount;

public:
	School(int a);
	~School();

	Student* GetStudent(string c);
	StAcc* GetAcc(int n);

	Student* CreateStudent(string n, string c);
	StAcc* CreateAccount(string c, string e, int n, string t, Student* o);
	StAcc* CreateAccount(string c, string e, int n, string t, Student* o, Student* f);
};

